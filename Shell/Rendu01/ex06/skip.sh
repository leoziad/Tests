ls -l | grep -n . | grep ^[[:digit:]]*[13579] | sed s/^[[:digit:]]*://
