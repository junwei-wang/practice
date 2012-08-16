#!/usr/bin/python2

import os
import time

# 1. The files and directories to be backed up are specified 
#    in a list
source = ['/home/wakemecn/python', '/home/wakemecn/.vimrc']

# 2. The backup must be stored in a mian backup directory
target_dir = '/home/wakemecn/backup/'

# 3. The file are backed up into a tar.gz file
# 4. The name of tar archive is the current date and time
target = target_dir + time.strftime('%Y-%m-%d_%H:%M:%S') + '.tar.gz'

# 5. We use the tar command to putthe files in a tar file
tar_command = 'tar zcfP %s %s' % (target, ' '.join(source))
print 'Run', tar_command

# Run the backup
if os.system(tar_command) == 0:
    print 'Successful backup to', target
else:
    print 'Backup FAILED'
