# .bashrc

# Source global definitions
if [ -f /etc/bashrc ]; then
	. /etc/bashrc
fi

alias h=history
alias j=jobs
alias l='ls -last'
alias rd=pushd

# Insert your Netid below
ADUSER=dong28

export ADUSER
/root/mntdrives
