pipeline {
  agent none
  stages {
    stage('Build and test') {
      parallel {
        stage('macOS') {
          agent { label 'macos' }
          steps {
            sh 'gn gen build_output/'
            sh 'ninja -C build_output/'
            sh 'build_output/executable'
          }
        }
      }
    }
  }
}
