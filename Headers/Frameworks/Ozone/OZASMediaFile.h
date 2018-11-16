//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, OZObjCDocument;

@interface OZASMediaFile : NSObject
{
    OZObjCDocument *_document;
    NSString *name;
    NSURL *file;
    _Bool dropzone;
    id _container;
}

- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 andFile:(id)arg2 andDropzone:(_Bool)arg3;
- (void)setFile:(id)arg1;
- (id)getFile;
- (void)setDropzone:(_Bool)arg1;
- (_Bool)getDropzone;
- (void)setName:(id)arg1;
- (id)getName;
- (id)document;
- (void)setDocument:(id)arg1;
- (id)objectSpecifier;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)errPrompt:(int)arg1 string:(id)arg2;

@end

