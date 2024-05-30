export-env {
  $env.TS_NUON = ("." | path expand)
  $env.TS_NVIM_ROOT = ($env.LOCALAPPDATA | path join "nvim-data" "lazy" "nvim-treesitter")
  cd ~/dev/emscripten-core/emsdk
  overlay use ~/dev/emscripten-core/emsdk/emsdk.nu
  cd $env.TS_NUON
}

def install_nvim [] {
  if not ("./nuon.dll" | path exists) {
    print $"(ansi red)No parser found, run build first(ansi reset)"
    return
  }

  let target = ($env.TS_NVIM_ROOT | path join 'parser' 'nuon.so')

  if ($target | path exists) {
    print "Removing previous parser"
    rm $target
  }

  print $"Copying parser to ($target)"
  cp nuon.dll $target
}

export def "env generate" [] {
  tree-sitter generate
}

export def "env build" [--skip] {
  env generate
  tree-sitter build
  tree-sitter build --wasm
  if not ($skip) {
    install_nvim
  }
}
