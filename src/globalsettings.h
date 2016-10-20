#ifndef _NANOFS_GLOBAL_SETTINGS_H_
#define _NANOFS_GLOBAL_SETTINGS_H_

#define BLOCK_SIZE 4096
#define MAX_DISK_SIZE (1024*1024*1024)
#define BLOCKS_COUNT (MAX_DISK_SIZE / BLOCK_SIZE)
#define BLOCK_FREE_LIST_DIMENSION (BLOCKS_COUNT / 8)

#define BLOCK_FREE_LIST_BLOCKSIZE (BLOCK_FREE_LIST_DIMENSION / BLOCK_SIZE)
#define INODE_LINKS 64
#define INODE_COUNT ((BLOCKS_COUNT - 1 - BLOCK_FREE_LIST_BLOCKSIZE) / INODE_LINKS)


#define INODE_INDEX_MAP_BLOCKSIZE ((INODE_COUNT / BLOCK_SIZE) + (INODE_COUNT % BLOCK_SIZE)/(INODE_COUNT % BLOCK_SIZE))
#define INODE_INDEX_MAP_DIMENSION (INODE_COUNT / 8)

#define PROTECTED_BLOCKS (1+BLOCK_FREE_LIST_BLOCKSIZE+INODE_COUNT+INODE_INDEX_MAP_BLOCKSIZE)

#define MAX_FILENAME 8

#endif
