//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FxPathAPI_v3
- (BOOL)pathGeometryInfo:(struct FxPathGeometryInfo *)arg1 forPath:(void *)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (BOOL)setPath:(void *)arg1 toColor:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)blendMode:(unsigned long long *)arg1 ofPath:(void *)arg2 error:(id *)arg3;
- (BOOL)point:(struct CGPoint *)arg1 atPercentageOfParameter:(double)arg2 alongPath:(void *)arg3 atTime:(CDStruct_1b6d18a9)arg4 error:(id *)arg5;
- (BOOL)point:(struct CGPoint *)arg1 atPercentageOfDistance:(double)arg2 alongPath:(void *)arg3 atTime:(CDStruct_1b6d18a9)arg4 error:(id *)arg5;
- (BOOL)vertex:(struct FxVertex *)arg1 atIndex:(unsigned long long)arg2 ofPath:(void *)arg3 atTime:(CDStruct_1b6d18a9)arg4 error:(id *)arg5;
- (BOOL)numberOfVertices:(unsigned long long *)arg1 inPath:(void *)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (BOOL)length:(double *)arg1 ofSegment:(unsigned long long)arg2 ofPath:(void *)arg3 atTime:(CDStruct_1b6d18a9)arg4 error:(id *)arg5;
- (BOOL)length:(double *)arg1 ofPath:(void *)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (BOOL)style:(unsigned long long *)arg1 ofPath:(void *)arg2 error:(id *)arg3;
- (BOOL)isPath:(void *)arg1 inverted:(char *)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (BOOL)isPath:(void *)arg1 open:(char *)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (BOOL)name:(id *)arg1 ofPath:(void *)arg2 error:(id *)arg3;
- (BOOL)pathID:(void **)arg1 forIndex:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)numberOfPathsAtTime:(CDStruct_1b6d18a9)arg1;
@end

