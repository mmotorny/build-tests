pipeline {
  agent none
  stages {
    stage('Test') {
      parallel {
        stage('Linux') {
          agent { label 'linux' }
          steps {
            sh 'gn gen build_output/'
            sh 'ninja -C build_output/'
            sh 'build_output/executable'
          }
        }
        stage('macOS') {
          agent { label 'macos' }
          steps {
            sh 'gn gen build_output/'
            sh 'ninja -C build_output/'
            sh 'build_output/executable'
          }
        }
        stage('Windows') {
          agent { label 'macos' }
          steps {
            echo 'TODO'
          }
        }
      }
    }
    stage('Notify') {
      agent any
      steps {
        emailext(
            subject: "STARTED: Job '${env.JOB_NAME} [${env.BUILD_NUMBER}]'",
            body: """<p>STARTED: Job '${env.JOB_NAME} [${env.BUILD_NUMBER}]':</p>
              <p>Check console output at &QUOT;<a href='${env.BUILD_URL}'>${env.JOB_NAME} [${env.BUILD_NUMBER}]</a>&QUOT;</p>""",
            recipientProviders: [[$class: 'DevelopersRecipientProvider']]
        )
      }
    }
  }
}
