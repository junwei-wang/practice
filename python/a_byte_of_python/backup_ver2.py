#!/usr/bin/python2

import os
import time

# 1. The files and directories to be backed up are specified 
#    in a list
source = ['/home/wakemecn/python', '/home/wakemecn/.vimrc']

# 2. The backup must be stored in a mian backup directory
#    if the dir doesn't exist, make a directory
target_dir = '/home/wakemecn/backup/'
if not os.path.exists(target_dir):
    os.makedirs(target_dir)
    print 'Successfully created directory', target_dir

# 3. Enter a comment about the backup
comment = raw_input('Enter a comment about the backup file --> ') 
if len(comment) > 0:
    comment = '_' + comment.replace(' ', '_')

# 4. The file are backed up into a tar.gz file
#    The name of tar archive is the current date and time
target = target_dir + time.strftime('%Y-%m-%d') + comment +  '.tar.gz'

# 5. We use the tar command to putthe files in a tar file
tar_command = 'tar zcfP %s %s' % (target, ' '.join(source))


# Run the backup
print 'Run', tar_command
if os.system(tar_command) == 0:
    print 'Successful backup to', target
else:
    print 'Backup FAILED'
