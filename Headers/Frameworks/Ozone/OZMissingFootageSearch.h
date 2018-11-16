//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSOpenPanel, NSPanel, NSProgressIndicator, NSString, NSTextField;

@interface OZMissingFootageSearch : NSObject
{
    vector_58ebe158 *_pMissingFootage;
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

+ (void)findAllMissingItems:(struct OZScene *)arg1 URL:(const struct PCURL *)arg2 showUI:(BOOL)arg3;
+ (void)findAllMissingFootage:(vector_58ebe158 *)arg1 searchDirectories:(id)arg2;
+ (void)askForAllMissingFootage:(vector_58ebe158 *)arg1;
- (int)tryCandidate:(id)arg1 onFootage:(struct OZFootage *)arg2;
- (void)tryFileCandidate:(id)arg1;
- (void)scanForMissingFootage:(vector_58ebe158 *)arg1 isSequence:(vector_69938c0b *)arg2 missingFileName:(id)arg3 directory:(id)arg4 searchDepth:(unsigned int)arg5 showUI:(BOOL)arg6;
- (void)scanForMissingFootage:(vector_58ebe158 *)arg1 searchDirectories:(id)arg2 searchDepth:(unsigned int)arg3 showUI:(BOOL)arg4;
- (int)askForMissingFootage:(struct OZFootage *)arg1 hasMultipleFiles:(BOOL)arg2;
- (void)updateProgressDisplay:(id)arg1;
- (void)cancelSearch:(id)arg1;
- (void)threadedFindMissingFootage;
- (void)askForAllMissingFootage:(vector_58ebe158 *)arg1;
- (BOOL)findMissingFootage:(vector_58ebe158 *)arg1 searchDirectories:(id)arg2 searchDepth:(unsigned int)arg3 showUI:(BOOL)arg4;
- (void)findAllMissingItems:(struct OZScene *)arg1 missingFootage:(vector_58ebe158 *)arg2 searchDirectories:(id)arg3 showUI:(BOOL)arg4;
- (void)findAllMissingItems:(struct OZScene *)arg1 URL:(const struct PCURL *)arg2 showUI:(BOOL)arg3;

@end

