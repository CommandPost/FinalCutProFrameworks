//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredSequence, FFAssetRef, FFMediaEventProject, FFStorageLocation, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FileData : NSObject
{
    FFAssetRef *_assetRef;
    FFAnchoredSequence *_clip;
    NSURL *_sourceFileURL;
    NSURL *_tempDestinationURL;
    NSURL *_symLinkURL;
    NSURL *_destinationFileURL;
    NSURL *_sourceFolderURL;
    NSURL *_tempDestinationFolderURL;
    NSURL *_destinationEventURL;
    NSURL *_sourceDataBaseFileURL;
    NSURL *_tempDestinationDataBaseFileURL;
    NSURL *_destinationDataBaseFileURL;
    FFStorageLocation *_location;
    FFMediaEventProject *_event;
    NSString *_destEventName;
    BOOL _isMove;
    BOOL _copyType;
    BOOL _includeOriginalMedia;
    BOOL _includeOptimizedMedia;
    BOOL _includeProxyMedia;
    BOOL _includeAnalysisFiles;
    BOOL _includeRenderFiles;
    unsigned long long _requestCount;
    BOOL isMove;
    BOOL copyType;
    BOOL includeOriginalMedia;
    BOOL includeOptimizedMedia;
    BOOL includeProxyMedia;
    BOOL includeAnalysisFiles;
    BOOL includeRenderFiles;
}

+ (id)fileData;
- (id)init;
- (id)description;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) BOOL includeRenderFiles; // @synthesize includeRenderFiles;
@property(nonatomic) BOOL includeAnalysisFiles; // @synthesize includeAnalysisFiles;
@property(nonatomic) BOOL includeProxyMedia; // @synthesize includeProxyMedia;
@property(nonatomic) BOOL includeOptimizedMedia; // @synthesize includeOptimizedMedia;
@property(nonatomic) BOOL includeOriginalMedia; // @synthesize includeOriginalMedia;
@property(nonatomic) BOOL copyType; // @synthesize copyType;
@property(nonatomic) BOOL isMove; // @synthesize isMove;
@property(retain, nonatomic) NSString *destEventName; // @synthesize destEventName=_destEventName;
@property(retain, nonatomic) FFMediaEventProject *event; // @synthesize event=_event;
@property(retain, nonatomic) FFStorageLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSURL *destinationDataBaseFileURL; // @synthesize destinationDataBaseFileURL=_destinationDataBaseFileURL;
@property(retain, nonatomic) NSURL *tempDestinationDataBaseFileURL; // @synthesize tempDestinationDataBaseFileURL=_tempDestinationDataBaseFileURL;
@property(retain, nonatomic) NSURL *sourceDataBaseFileURL; // @synthesize sourceDataBaseFileURL=_sourceDataBaseFileURL;
@property(retain, nonatomic) NSURL *destinationEventURL; // @synthesize destinationEventURL=_destinationEventURL;
@property(retain, nonatomic) NSURL *tempDestinationFolderURL; // @synthesize tempDestinationFolderURL=_tempDestinationFolderURL;
@property(retain, nonatomic) NSURL *sourceFolderURL; // @synthesize sourceFolderURL=_sourceFolderURL;
@property(retain, nonatomic) NSURL *destinationFileURL; // @synthesize destinationFileURL=_destinationFileURL;
@property(retain, nonatomic) NSURL *symLinkURL; // @synthesize symLinkURL=_symLinkURL;
@property(retain, nonatomic) NSURL *tempDestinationURL; // @synthesize tempDestinationURL=_tempDestinationURL;
@property(retain, nonatomic) NSURL *sourceFileURL; // @synthesize sourceFileURL=_sourceFileURL;
@property(retain, nonatomic) FFAnchoredSequence *clip; // @synthesize clip=_clip;
@property(retain, nonatomic) FFAssetRef *assetRef; // @synthesize assetRef=_assetRef;

@end
