//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIO/MIOObject.h>

#import <MIO/NSCoding-Protocol.h>
#import <MIO/NSCopying-Protocol.h>

@class MIOAudioChannelMap, MIOTimecode, NSMutableArray, NSMutableDictionary, NSString;

@interface MIOClip : MIOObject <NSCoding, NSCopying>
{
    NSString *_name;
    NSString *_reelName;
    NSString *_filePath;
    NSMutableDictionary *_metadata;
    NSString *_clipID;
    MIOTimecode *_inTC;
    MIOTimecode *_outTC;
    BOOL _audioEnabled;
    BOOL _videoEnabled;
    MIOAudioChannelMap *_audioChannelMap;
    double _framerate;
    int _timecodeFormat;
    int _status;
    int _fatalError;
    NSMutableArray *_otherErrors;
}

+ (id)clipWithSubSegment:(id)arg1;
+ (id)clip;
+ (id)keyPathsForValuesAffectingShootingRate;
+ (id)keyPathsForValuesAffectingDurationTC;
@property(retain) NSMutableArray *otherErrors; // @synthesize otherErrors=_otherErrors;
@property int fatalError; // @synthesize fatalError=_fatalError;
@property int status; // @synthesize status=_status;
@property int timecodeFormat; // @synthesize timecodeFormat=_timecodeFormat;
@property(nonatomic) double framerate; // @synthesize framerate=_framerate;
@property(copy) MIOAudioChannelMap *audioChannelMap; // @synthesize audioChannelMap=_audioChannelMap;
@property(getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(getter=isAudioEnabled) BOOL audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(copy) NSString *clipID; // @synthesize clipID=_clipID;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy) NSString *reelName; // @synthesize reelName=_reelName;
@property(copy) NSString *name; // @synthesize name=_name;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
@property double shootingRate;
@property(copy) MIOTimecode *durationTC;
@property(copy) MIOTimecode *outTC;
@property(copy) MIOTimecode *inTC;
- (void)setFormat:(int)arg1;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

