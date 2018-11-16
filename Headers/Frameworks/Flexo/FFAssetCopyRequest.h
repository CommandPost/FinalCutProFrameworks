//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAsset, FFAssetFileIdentifier, NSString;

__attribute__((visibility("hidden")))
@interface FFAssetCopyRequest : NSObject
{
    FFAssetFileIdentifier *_sourceFileID;
    FFAssetFileIdentifier *_targetFileID;
    id _completionTarget;
    SEL _completionSelector;
    FFAsset *_targetAsset;
    long long _bytesToCopy;
    long long _bytesCopied;
    struct __FSFileOperation *_fileOp;
    BOOL _isDone;
    BOOL _abortedByPause;
    id _clientInfo;
    id _customObject;
    id _customObject2;
    FFAssetCopyRequest *_duplicateRequest;
    NSString *_displayName;
    unsigned long long _sourceAndTargetPathHash;
}

@property(readonly, nonatomic) unsigned long long sourceAndTargetPathHash; // @synthesize sourceAndTargetPathHash=_sourceAndTargetPathHash;
@property(retain) FFAssetFileIdentifier *sourceFileID; // @synthesize sourceFileID=_sourceFileID;
@property(retain) FFAssetFileIdentifier *targetFileID; // @synthesize targetFileID=_targetFileID;
@property(nonatomic) BOOL isDone; // @synthesize isDone=_isDone;
@property(nonatomic) struct __FSFileOperation *fileOp; // @synthesize fileOp=_fileOp;
@property(nonatomic) BOOL abortedByPause; // @synthesize abortedByPause=_abortedByPause;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long bytesCopied; // @synthesize bytesCopied=_bytesCopied;
@property(nonatomic) long long bytesToCopy; // @synthesize bytesToCopy=_bytesToCopy;
@property(retain) id customObject2; // @synthesize customObject2=_customObject2;
@property(retain) id customObject; // @synthesize customObject=_customObject;
@property(retain) id clientInfo; // @synthesize clientInfo=_clientInfo;
- (void)reset;
- (void)addDuplicateRequest:(id)arg1;
- (void)asyncCopyCompleted;
- (void)synchronousCopyCompleted;
- (void)addLibrariesInUse:(id)arg1;
- (BOOL)usesLibrary:(id)arg1;
- (SEL)completionSelector;
- (id)completionTarget;
- (id)targetAsset;
- (void)queueRequest;
- (id)description;
- (void)dealloc;
- (id)initWithSourceFileID:(id)arg1 targetFileID:(id)arg2 completionTarget:(id)arg3 completionSelector:(SEL)arg4 targetAsset:(id)arg5;

@end

