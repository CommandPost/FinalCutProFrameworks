//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFCaptionTextBlockLayout, NSString;

__attribute__((visibility("hidden")))
@interface FFCaptionTextBlockLayoutManager : NSObject
{
    int _mode;
    NSString *_userLayoutPath;
    NSString *_factoryLayoutPath;
    FFCaptionTextBlockLayout *_factoryLayoutInternal;
    FFCaptionTextBlockLayout *_currentLayoutInternal;
}

+ (id)sharedManager;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) FFCaptionTextBlockLayout *currentLayoutInternal; // @synthesize currentLayoutInternal=_currentLayoutInternal;
@property(retain, nonatomic) FFCaptionTextBlockLayout *factoryLayoutInternal; // @synthesize factoryLayoutInternal=_factoryLayoutInternal;
@property(retain, nonatomic) NSString *factoryLayoutPath; // @synthesize factoryLayoutPath=_factoryLayoutPath;
@property(retain, nonatomic) NSString *userLayoutPath; // @synthesize userLayoutPath=_userLayoutPath;
- (id)_newTextBlockFromLayoutDictionary:(id)arg1 withCaptionArray:(id)arg2 andAttributedStrings:(id)arg3 fromAnchoredCaption:(id)arg4;
- (BOOL)loadLayoutFromUserDefaults:(id)arg1;
- (BOOL)loadFactoryLayoutFromUserDefaults:(id)arg1;
- (BOOL)saveLayoutToUserDefaults:(id)arg1;
- (id)initInUserDefaultMode;
- (BOOL)loadLayoutFromDisk:(id)arg1;
- (BOOL)loadFactoryLayoutFromDisk:(id)arg1;
- (BOOL)saveLayoutToDisk:(id)arg1;
- (id)initInFileMode;
- (BOOL)saveLayout:(id)arg1;
- (BOOL)applyLayout:(id)arg1 toCaption:(id)arg2;
- (id)layoutFromCaption:(id)arg1;
- (id)factoryLayout;
- (id)currentLayout;
- (void)dealloc;
- (id)init;

@end

