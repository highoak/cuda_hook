# export LD_LIBRARY_PATH=/workspace/cuda_hook/output/lib64:/usr/local/cuda-11.8/targets/x86_64-linux/lib:/usr/lib/x86_64-linux-gnu
# echo $LD_LIBRARY_PATH


export LD_PRELOAD=/workspace/cuda_hook/output/lib64/libcublas.so
#  /workspace/cuda_logger/output/matrix_multiply
python /workspace/mat_mul.py

# python /workspace/mini_mul.py
