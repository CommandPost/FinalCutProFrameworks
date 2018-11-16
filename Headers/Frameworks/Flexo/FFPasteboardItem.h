//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FFPasteboardItem : NSObject <NSCoding, NSPasteboardWriting, NSPasteboardReading>
{
    NSData *_data;
    NSString *_documentID;
    NSString *_parentObjectID;
    NSDictionary *_copiedTypes;
    NSDictionary *_options;
    NSURL *_objectURI;
    id _modelObject;
    NSArray *_modelObjectIDs;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSDictionary *copiedTypes; // @synthesize copiedTypes=_copiedTypes;
@property(retain, nonatomic) NSString *parentObjectID; // @synthesize parentObjectID=_parentObjectID;
@property(retain, nonatomic) NSString *documentID; // @synthesize documentID=_documentID;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newObjectsWithProject:(id)arg1 assetFlags:(int)arg2;
- (id)_newDecodeObjectsWithProject:(id)arg1 assetFlags:(int)arg2;
- (id)modelObjectIDs;
- (void)setModelObjectIDs:(id)arg1;
- (id)initWithArray:(id)arg1 parent:(id)arg2 copiedTypes:(id)arg3 options:(id)arg4;
- (void)_initHelperWithObject:(id)arg1 parent:(id)arg2 copiedTypes:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

