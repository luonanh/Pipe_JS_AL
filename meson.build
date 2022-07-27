project('pipe_linux', 'c')
thread_dep = dependency('threads')
c_compiler = meson.get_compiler('c')

#subdir('flock')
#subdir('shmem')
#subdir('pipes')
#subdir('mqueue')
#subdir('sockets')
#subdir('sigs')
hello_dep = []
hello_dep += thread_dep
executable('hello', 'hello.c', dependencies : hello_dep)

read_pipe_dep = []
read_pipe_dep += thread_dep
executable('pipe', 'read_pipe.c', dependencies : read_pipe_dep)

#memwriter_dep = []
#memwriter_dep += thread_dep
#memwriter_dep += rt_dep
#executable('mem_writer', 'memwriter.c', dependencies : memwriter_dep)
#
#memreader_dep = []
#memreader_dep += thread_dep
#memreader_dep += rt_dep
#executable('mem_reader', 'memreader.c', dependencies : memreader_dep)
#
#fifowriter_dep = []
#fifowriter_dep += thread_dep
#fifowriter_dep += rt_dep
#executable('fifo_writer', 'fifoWriter.c', dependencies : fifowriter_dep)
#
#fiforeader_dep = []
#fiforeader_dep += thread_dep
#fiforeader_dep += rt_dep
#executable('fifo_reader', 'fifoReader.c', dependencies : fiforeader_dep)
#
#pipe_dep = []
#pipe_dep += thread_dep
#pipe_dep += rt_dep
#executable('pipe', 'pipeUN.c', dependencies : pipe_dep)
#
#receiver_dep = []
#receiver_dep += thread_dep
#receiver_dep += rt_dep
#executable('q_receiver', 'receiver.c', dependencies : receiver_dep)
#
#sender_dep = []
#sender_dep += thread_dep
#sender_dep += rt_dep
#executable('q_sender', 'sender.c', dependencies : sender_dep)
