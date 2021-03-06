//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKShareStatus, NSString;

@interface FFShareStatus : NSObject
{
    NSString *_plistFilePath;
    CKShareStatus *_ckShareStatus;
}

+ (void)showInBrowser:(id)arg1;
+ (id)shareKindString:(id)arg1;
+ (id)allShareKindString:(id)arg1;
+ (void)addToShareHistory:(id)arg1 forShareKind:(id)arg2 withURL:(id)arg3 replaceIfExists:(BOOL)arg4;
+ (BOOL)isVideoPathLocal:(id)arg1;
+ (void)unregisterForAllSharedNotifications:(id)arg1;
+ (void)registerForAllSharedNotifications:(id)arg1 withSelector:(SEL)arg2;
@property(retain, nonatomic) NSString *plistFilePath; // @synthesize plistFilePath=_plistFilePath;
- (id)fetchLastVideoPath;
- (id)allSharedKind;
- (id)fpStringForShareKind:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)urlStringForShareKind:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)dateStringForShareKind:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)dateForShareKind:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)publishCountForShareKind:(id)arg1;
- (id)shareKindArray:(id)arg1;
- (void)tellAFriend:(id)arg1 withContent:(id)arg2;
- (id)sortItemsArray:(id)arg1;
- (id)sortShareArray:(id)arg1 withID:(id)arg2;
- (id)latestDateFromArray:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)allSharedItems;

@end

