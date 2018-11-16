//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDate, NSNumber, NSString;

@interface FFNamingPreset : NSObject <NSCoding, NSCopying>
{
    NSString *_name;
    NSArray *_tokens;
    NSString *_customString;
    NSNumber *_minimumNumberOfDigits;
    NSNumber *_startingCounterNumber;
    NSDate *_creationDate;
    NSDate *_currentDate;
}

+ (id)presetWithName:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSNumber *startingCounterNumber; // @synthesize startingCounterNumber=_startingCounterNumber;
@property(retain) NSNumber *minimumNumberOfDigits; // @synthesize minimumNumberOfDigits=_minimumNumberOfDigits;
@property(retain, nonatomic) NSString *customString; // @synthesize customString=_customString;
@property(retain) NSArray *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)stringWithBinObject_FFNamingTokenDeviceSerialNumber:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenDeviceModelName:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenDeviceManufacturer:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenCreatedBy:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenSource:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenAudioRate:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenAudio:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenPulldown:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenTimecodeFormat:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenShootingRate:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenVideoBitRate:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenVideoRate:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenFormat:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenDateModified:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenTime:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenDayOfMonth:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenMonthOfYear:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenYear:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenDate:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenCurrentTime:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenCurrentDayOfMonth:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenCurrentMonthOfYear:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenCurrentYear:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenCurrentDate:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenIncompleteSpan:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenCounter:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenReel:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenAngle:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenShotTake:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenScene:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenCustom:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenCurrentName:(id)arg1;
- (id)stringWithBinObject_FFNamingTokenOriginalName:(id)arg1;
- (id)nameWithBinObject:(id)arg1;
- (void)applyPresetToBinObject:(id)arg1;
@property(readonly, retain) NSString *sampleName;
- (BOOL)hasCounterToken;
- (BOOL)hasCustomToken;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;

@end

