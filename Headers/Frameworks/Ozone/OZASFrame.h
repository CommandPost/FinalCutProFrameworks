//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OZObjCDocument;

@interface OZASFrame : NSObject
{
    double index;
    OZObjCDocument *_document;
    id _container;
}

- (id)init;
- (id)initWithIndex:(double)arg1 andDocument:(id)arg2;
- (void)dealloc;
- (id)getName;
- (void)setIndex:(double)arg1;
- (double)getIndex;
- (CDStruct_1b6d18a9)getTime;
- (id)objectSpecifier;
- (id)document;
- (void)setDocument:(id)arg1;
- (void)setContainer:(id)arg1;
- (id)container;

@end
