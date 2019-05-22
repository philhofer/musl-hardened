#define ZERO_ON_FREE true
#define WRITE_AFTER_FREE_CHECK true
#define SLOT_RANDOMIZE true
#define SLAB_CANARY true
#define SLAB_QUARANTINE_RANDOM_LENGTH 1
#define SLAB_QUARANTINE_QUEUE_LENGTH 1
#define CONFIG_EXTENDED_SIZE_CLASSES true
#define CONFIG_LARGE_SIZE_CLASSES true
#define GUARD_SLABS_INTERVAL 1
#define GUARD_SIZE_DIVISOR 2
#define REGION_QUARANTINE_RANDOM_LENGTH 128
#define REGION_QUARANTINE_QUEUE_LENGTH 1024
#define REGION_QUARANTINE_SKIP_THRESHOLD 33554432
#define FREE_SLABS_QUARANTINE_RANDOM_LENGTH 32
#define CONFIG_CLASS_REGION_SIZE 137438953472
#define N_ARENA 4
#define RANDOM_CACHE_SIZE 256U
#define RANDOM_RESEED_SIZE (256U * 1024)
