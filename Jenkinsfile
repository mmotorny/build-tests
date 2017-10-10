pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        parallel(
          "Linux": {
            node(label: 'linux') {
              sh 'gn gen build_output/'
              sh 'ninja -C build_output/'
              sh 'build_output/executable'
            }
            
            
          },
          "macOS": {
            node(label: 'macos') {
              sh 'gn gen build_output/'
              sh 'ninja -C build_output/'
              sh 'build_output/executable'
            }
            
            
          },
          "": {
            echo 'Boo!'
            
          }
        )
      }
    }
  }
}