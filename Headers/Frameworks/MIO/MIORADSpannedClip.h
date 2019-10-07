//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIORADClip.h>

@class AVAsset, NSMutableArray, NSString;

@interface MIORADSpannedClip : MIORADClip
{
    NSMutableArray *_clips;
    NSString *_spannedClipID;
    AVAsset *_spannedAsset;
}

+ (id)spannedClipWithID:(id)arg1;
- (id)__pluginUUID;
- (id)valueForUndefinedKey:(id)arg1;
- (void *)ingestObjectRefCon;
- (id)ingestObject;
- (BOOL)useAssetImportPath;
- (id)ingestSourceFiles;
- (id)valueForKeyPath:(id)arg1;
- (void)willUnmount:(id)arg1;
- (id)valueInMetadataFileForProperty:(id)arg1;
- (void)setValue:(id)arg1 inMetadataFileForProperty:(id)arg2;
- (id)reelName;
- (void)setReelName:(id)arg1;
- (id)clipID;
- (unsigned int)memberCount;
- (void)removeMemberClipsFromVolume:(id)arg1;
- (void)addMemberClip:(id)arg1;
- (id)newSpannedAsset;
- (void)sortClips;
- (id)findClipByID:(id)arg1;
- (BOOL)isComplete;
- (id)spannedClip;
- (BOOL)spansAcrossVolumes;
- (BOOL)isSpanned;
- (struct opaqueCMFormatDescription *)audioFormatDescription;
- (struct opaqueCMFormatDescription *)videoFormatDescription;
- (BOOL)parseEntireFile;
- (id)tempClipDefaults;
- (void *)byteStream;
- (BOOL)useBuiltInFormatReader;
- (id)formatReader;
- (BOOL)limitedPlayback;
- (id)channelMap;
- (void)setChannelMap:(id)arg1;
- (id)metadata;
- (id)extendedProperties;
- (id)locationISO6709;
- (id)shot;
- (id)scene;
- (id)deviceModelName;
- (id)deviceSerialNumber;
- (id)deviceManufacturer;
- (id)sourceAudioFormat;
- (id)targetFormatString;
- (long long)targetFormat;
- (long long)decodePixelFormat;
- (long long)sourceFormat;
- (id)lastChangeDateTimeZone;
- (id)lastChangeDate;
- (id)creationDateTimeZone;
- (id)creationDate;
- (id)creator;
- (unsigned int)bitsPerSample;
- (unsigned int)sampleRate;
- (id)aspectRatio;
- (unsigned int)numberOfAudioChannels;
- (double)mediaRate;
- (unsigned int)videoBitrate;
- (double)shootingRate;
- (unsigned int)videoHeight;
- (unsigned int)videoWidth;
- (id)displayFormat;
- (id)format;
- (id)timecodeStart;
- (int)timecodeFormat;
- (int)pulldown;
- (double)frameRate;
- (id)mediaDuration;
- (BOOL)isMediaDurationAccurate;
- (id)mediaStart;
- (double)targetDataSizeOnVolume:(id)arg1;
- (double)dataSizeOnVolume:(id)arg1;
- (double)targetDataSize;
- (double)dataSizeForAudioChannelIndex:(unsigned int)arg1;
- (double)videoDataSize;
- (double)dataSize;
- (id)clipFileName;
- (id)name;
- (id)volumes;
- (id)clipURLs;
- (id)clips;
- (id)volume;
- (id)firstClip;
- (id)description;
- (id)avAsset;
- (void)dealloc;
- (id)initWithID:(id)arg1;

@end

