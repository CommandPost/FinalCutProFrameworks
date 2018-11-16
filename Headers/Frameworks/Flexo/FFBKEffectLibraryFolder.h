//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerMasterItem.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FFBKEffectLibraryFolder : FFOrganizerMasterItem
{
    NSString *_effectType;
    NSString *_genre;
    NSMutableArray *_genres;
}

+ (id)standardProvider;
- (void)setupThemesFolder;
- (void)setupAllAVFXFolder;
- (id)initWithEffectType:(id)arg1 genre:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)effectIDWasRegistered:(id)arg1;
- (id)itemDisplayName;
- (BOOL)drawAsTopLevel;
- (BOOL)itemIsPlaceholder;
- (id)itemCategoryName;
- (id)items;
- (id)masterSubitems;
- (BOOL)hasMasterSubitems;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly, nonatomic) NSString *effectType; // @synthesize effectType=_effectType;

@end
