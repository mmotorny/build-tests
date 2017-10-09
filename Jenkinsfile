pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        parallel(
          "Build": {
            sh 'gn gen build_output/'
            sh 'ninja -C build_output/'
            
          },
          "": {
            sh 'env'
            
          }
        )
      }
    }
  }
}