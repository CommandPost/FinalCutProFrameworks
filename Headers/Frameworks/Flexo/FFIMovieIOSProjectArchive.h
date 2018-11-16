//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFZipFileExtractor, NSArray, NSDictionary, NSString;

@interface FFIMovieIOSProjectArchive : NSObject
{
    NSDictionary *_metadataRecord;
    NSDictionary *_projectRecord;
    NSArray *_sharedMedia;
    NSArray *_transitions;
    FFZipFileExtractor *_fileExtractor;
}

@property(retain, nonatomic) FFZipFileExtractor *fileExtractor; // @synthesize fileExtractor=_fileExtractor;
@property(retain, nonatomic) NSArray *transitions; // @synthesize transitions=_transitions;
@property(retain, nonatomic) NSArray *sharedMedia; // @synthesize sharedMedia=_sharedMedia;
@property(retain, nonatomic) NSDictionary *projectRecord; // @synthesize projectRecord=_projectRecord;
@property(retain, nonatomic) NSDictionary *metadataRecord; // @synthesize metadataRecord=_metadataRecord;
@property(readonly, nonatomic) NSArray *cutaways;
@property(readonly, nonatomic) NSArray *backgroundAudioClips;
@property(readonly, nonatomic) NSArray *foregroundAudioClips;
@property(readonly, nonatomic) NSDictionary *trailer;
@property(readonly, nonatomic) long long lossyImportVersion;
@property(readonly, nonatomic) long long projectVersion;
@property(readonly, nonatomic) BOOL contains4kContent;
@property(readonly, nonatomic) BOOL contains1080Content;
@property(readonly, nonatomic) NSString *timePitchAlgorithm;
@property(readonly, nonatomic) long long duration;
@property(readonly, nonatomic) double frameRate;
@property(readonly, nonatomic) NSString *themeID;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSArray *editList;
@property(readonly, nonatomic) NSDictionary *editInfo;
- (void)dealloc;
- (id)initWithMetadata:(id)arg1 project:(id)arg2 sharedMedia:(id)arg3;

@end

