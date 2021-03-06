//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOpenPanel, NSPanel, NSProgressIndicator, NSString, NSTextField;

@interface OZMissingFootageSearch : NSObject
{
    vector_cb87781e *_pMissingFootage;
    NSArray *_pSearchDirectories;
    unsigned int _searchDepth;
    BOOL _showUI;
    BOOL _searchCanceled;
    unsigned int _totalMissing;
    NSString *_pProgressDirectoryString;
    NSString *_pProgressRemainingString;
    NSPanel *_pProgressPanel;
    NSTextField *_pProgressDirectoryText;
    NSTextField *_pProgressRemainingText;
    NSProgressIndicator *_pProgressIndicator;
    NSOpenPanel *_pOpenPanel;
}

+ (void)askForAllMissingFootage:(vector_cb87781e *)arg1;
+ (void)findAllMissingFootage:(vector_cb87781e *)arg1 searchDirectories:(id)arg2;
+ (void)findAllMissingItems:(struct OZScene *)arg1 URL:(const struct PCURL *)arg2 showUI:(BOOL)arg3;
- (void)findAllMissingItems:(struct OZScene *)arg1 URL:(const struct PCURL *)arg2 showUI:(BOOL)arg3;
- (void)findAllMissingItems:(struct OZScene *)arg1 missingFootage:(vector_cb87781e *)arg2 searchDirectories:(id)arg3 showUI:(BOOL)arg4;
- (BOOL)findMissingFootage:(vector_cb87781e *)arg1 searchDirectories:(id)arg2 searchDepth:(unsigned int)arg3 scene:(struct OZScene *)arg4 showUI:(BOOL)arg5;
- (void)askForAllMissingFootage:(vector_cb87781e *)arg1;
- (void)threadedFindMissingFootage;
- (void)cancelSearch:(id)arg1;
- (void)updateProgressDisplay:(id)arg1;
- (long long)askForMissingFootage:(struct OZSceneNodeFile *)arg1 hasMultipleFiles:(BOOL)arg2;
- (void)scanForMissingFootage:(vector_cb87781e *)arg1 searchDirectories:(id)arg2 searchDepth:(unsigned int)arg3 showUI:(BOOL)arg4;
- (void)scanForMissingFootage:(vector_cb87781e *)arg1 isSequence:(vector_a7cf9eda *)arg2 missingFileName:(id)arg3 directory:(id)arg4 searchDepth:(unsigned int)arg5 showUI:(BOOL)arg6;
- (void)tryFileCandidate:(id)arg1;
- (int)tryCandidate:(id)arg1 onFootage:(struct OZFootage *)arg2;
- (int)tryCandidate:(id)arg1 on3DSceneNodeFile:(struct OZ3DEngineSceneFile *)arg2;

@end

