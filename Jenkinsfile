pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        sh 'gn gen build_output/'
        sh 'ninja -C build_output/'
      }
    }
  }
}