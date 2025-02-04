#ifndef PRECISION_MODE
    #define PRECISION_MODE USE_FP16
#endif

#if PRECISION_MODE == USE_FP16
    #define USE_FP16
#elif PRECISION_MODE == USE_FP32
    #define USE_FP32
#elif PRECISION_MODE == USE_INT8
    #define USE_INT8
#endif

const static char* kInputTensorName = "images";
const static char* kOutputTensorName = "output";
//Quantization input image folder path
const static char* kInputQuantizationFolder = "./coco_calib";

#ifndef N_OBJ_CLASSES
    constexpr static int kNumClass = 80;
#else
    constexpr static int kNumClass = N_OBJ_CLASSES;
#endif

#ifndef BATCH_SIZE
    constexpr static int kBatchSize = 1;
#else
    constexpr static int kBatchSize = BATCH_SIZE;
#endif

#ifndef GPU_ID
    constexpr static int kGpuId = 0;
#else
    constexpr static int kGpuId = GPU_ID;
#endif

#ifndef INPUT_HEIGHT
    constexpr static int kInputH = 640;
#else
    constexpr static int kInputH = INPUT_HEIGHT;
#endif

#ifndef INPUT_WIDTH
    constexpr static int kInputW = 640;
#else
    constexpr static int kInputW = INPUT_WIDTH;
#endif

#ifndef NMS_THRESHOLD
    constexpr static float kNmsThresh = 0.45f;
#else
    constexpr static float kNmsThresh = NMS_THRESHOLD;
#endif

#ifndef CONFIDENCE_THRESHOLD
    constexpr static float kConfThresh = 0.5f;
#else
    constexpr static float kConfThresh = CONFIDENCE_THRESHOLD;
#endif

#ifndef CONFIDENCE_THRESHOLD_KEYPOINTS
    constexpr static float kConfThreshKeypoints = 0.5f;  // keypoints confidence
#else
    constexpr static float kConfThreshKeypoints = CONFIDENCE_THRESHOLD_KEYPOINTS;
#endif

#ifndef MAX_INPUT_IMAGE_SIZE
    constexpr static int kMaxInputImageSize = 3000 * 3000;
#else
    constexpr static int kMaxInputImageSize = MAX_INPUT_IMAGE_SIZE;
#endif

#ifndef MAX_NUM_OUTPUT_BBOX
    constexpr static int kMaxNumOutputBbox = 1000;
#else
    constexpr static int kMaxNumOutputBbox = MAX_NUM_OUTPUT_BBOX;
#endif
// Classification model's number of classes
#ifndef N_CLS_CLASSES
    constexpr static int kClsNumClass = 1000;
#else
    constexpr static int kClsNumClass = N_CLS_CLASSES;
#endif

// Classification model's input shape
#ifndef N_CLS_INPUT_H
    constexpr static int kClsInputH = 224;
#else
    constexpr static int kClsInputH = N_CLS_INPUT_H;
#endif

#ifndef N_CLS_INPUT_W
    constexpr static int kClsInputW = 224;
#else
    constexpr static int kClsInputW = N_CLS_INPUT_W;
#endif

// Pose model's number of classes
#ifndef N_POSE_CLASSES
    constexpr static int kPoseNumClass = 1;
#else
    constexpr static int kPoseNumClass = N_POSE_CLASSES;
#endif

#ifndef N_POSE_KPTS
    constexpr static int kNumberOfPoints = 17;
#else
    constexpr static int kNumberOfPoints = N_POSE_KPTS;
#endif

// OBB model's number of classes
#ifndef N_OBB_CLASSES
    constexpr static int kObbNumClass = 15;
#else
    constexpr static int kObbNumClass = N_OBB_CLASSES;
#endif
