//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFAssetFileIdentifier, FFMediaEventDocument, FFMediaRep, NSURL;

__attribute__((visibility("hidden")))
@interface FFAssetFileDesc : NSObject
{
    FFMediaEventDocument *_document;
    FFMediaRep *_mediaRep;
    FFAssetFileIdentifier *_assetFileID;
}

+ (id)URLsFromDescs:(id)arg1;
@property(readonly, nonatomic) FFAssetFileIdentifier *assetFileID; // @synthesize assetFileID=_assetFileID;
@property(readonly, nonatomic) FFMediaRep *mediaRep; // @synthesize mediaRep=_mediaRep;
@property(retain, nonatomic) FFMediaEventDocument *document; // @synthesize document=_document;
- (void)dealloc;
@property(readonly, nonatomic) NSURL *URL;
- (id)newDescWithURL:(id)arg1;
- (id)initWithDocument:(id)arg1 url:(id)arg2;
- (id)initWithDocument:(id)arg1 mediaRep:(id)arg2;
- (id)initWithDocument:(id)arg1 mediaRep:(id)arg2 assetFileID:(id)arg3;

@end

