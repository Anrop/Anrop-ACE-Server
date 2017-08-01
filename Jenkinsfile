pipeline {
    agent {
        label 'mikero'
    }

    stages {
        stage('Build') {
            steps {
                bat 'build.bat' 
                archiveArtifacts artifacts: '@anrop_ace_server/**/*'
            }
            post {
                always {
                    bat 'subst p: /d > nul'
                }
            }
        }
    }
}
