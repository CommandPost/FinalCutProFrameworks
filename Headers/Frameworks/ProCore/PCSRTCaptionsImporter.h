//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSColor, NSColorSpace;

__attribute__((visibility("hidden")))
@interface PCSRTCaptionsImporter : NSObject
{
    NSCharacterSet *_tagBeginningCharacters;
    NSCharacterSet *_tagEndingCharacters;
    NSColorSpace *_taggedFontColorSpace;
    NSColor *_taggedFontColor;
    long long _previousTag;
}

@property(nonatomic) long long previousTag; // @synthesize previousTag=_previousTag;
@property(retain, nonatomic) NSColor *taggedFontColor; // @synthesize taggedFontColor=_taggedFontColor;
@property(retain, nonatomic) NSColorSpace *taggedFontColorSpace; // @synthesize taggedFontColorSpace=_taggedFontColorSpace;
@property(retain, nonatomic) NSCharacterSet *tagEndingCharacters; // @synthesize tagEndingCharacters=_tagEndingCharacters;
@property(retain, nonatomic) NSCharacterSet *tagBeginningCharacters; // @synthesize tagBeginningCharacters=_tagBeginningCharacters;
- (id)importCaptionsFromURL:(id)arg1 intoArray:(id)arg2 withFrameDuration:(CDStruct_1b6d18a9)arg3 andStartTimeOffset:(CDStruct_1b6d18a9)arg4;
- (id)_parseTagsInString:(id)arg1;
- (long long)_tagFromToken:(id)arg1;
- (id)_tokenizeString:(id)arg1 withTokenStartSet:(id)arg2 andTokenEndSet:(id)arg3;
- (id)_attributedStringFromString:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 underline:(BOOL)arg4 color:(id)arg5;
- (id)_parseTimecodeString:(id)arg1 intoSeconds:(double *)arg2;
- (void)dealloc;
- (id)init;

@end

