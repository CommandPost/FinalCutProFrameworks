//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFScheduleToken.h>

@class FFImage, FFSVContext, FFSegmentStoreRef, FFStreamVideo, FFStreamVideoDeinterlace, NSCondition, PCMatrix44Double;

__attribute__((visibility("hidden")))
@interface FFScheduleTokenDeinterlace : FFScheduleToken
{
    CDStruct_bdcb2b0d _key;
    FFStreamVideoDeinterlace *_deinterlaceStream;
    FFStreamVideo *_inputStream;
    CDStruct_1b6d18a9 _requestedTime;
    FFSVContext *_context;
    PCMatrix44Double *_downstreamPT;
    int _maxPrioritySeen;
    struct CGRect _expectedROI;
    CDStruct_1b6d18a9 _t1;
    CDStruct_1b6d18a9 _t2;
    CDStruct_1b6d18a9 _t_next;
    CDStruct_1b6d18a9 _t5;
    CDStruct_1b6d18a9 _t6;
    FFScheduleToken *_inputsToken;
    _Bool _hasBeenHinted;
    _Bool _autoHinted;
    _Bool _hasBeenImaged;
    FFSegmentStoreRef *_segStoreRef;
    PCMatrix44Double *_outputPT;
    NSCondition *_cond;
    int _state;
    struct CGRect _roi;
    FFImage *_img1;
    FFImage *_img2;
    FFImage *_img3;
    FFImage *_img4;
    FFImage *_flattenResult;
}

+ (id)sharedCache;
+ (id)newDeinterlaceTokenBySchedulingOrCacheLookup:(id)arg1 inStream:(id)arg2 key:(CDStruct_bdcb2b0d)arg3 time:(CDStruct_1b6d18a9)arg4 duration:(CDStruct_1b6d18a9)arg5 context:(id)arg6 downstreamPT:(id)arg7 isScheduling:(BOOL)arg8 roiHint:(const struct CGRect *)arg9;
+ (void)initialize;
- (id).cxx_construct;
- (_Bool)hiPriority;
- (void)performWaitForMode:(int)arg1;
- (_Bool)needsWaitForMode:(int)arg1;
- (void)processForMode:(int)arg1;
- (_Bool)readyToProcessForMode:(int)arg1;
- (int)state;
- (id)_getFlatImageNow;
- (id)copyDeinterlacedImage:(struct CGRect)arg1;
- (id)_newRepresentationalImage;
- (void)_ensureUnderlyingImages:(struct CGRect *)arg1 info:(id)arg2;
- (void)_scheduleInputSources;
- (id)_getInputPixelFormatInfoRetHeliumFormat:(int *)arg1 retycbcrFormat:(int *)arg2;
- (void)updatePrioritySeen:(int)arg1;
- (_Bool)hintWillImageSoon;
- (_Bool)areStatusFlagsClear:(unsigned int)arg1;
- (_Bool)waitForStatusFlagsToClear:(unsigned int)arg1 beforeDate:(id)arg2;
- (unsigned int)scheduleStatusInformation;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithStream:(id)arg1 inputStream:(id)arg2 key:(CDStruct_bdcb2b0d)arg3 time:(CDStruct_1b6d18a9)arg4 duration:(CDStruct_1b6d18a9)arg5 context:(id)arg6 downstreamPT:(id)arg7;

@end
