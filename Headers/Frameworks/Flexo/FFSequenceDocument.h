//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProjectDocument.h>

@interface FFSequenceDocument : FFProjectDocument
{
}

+ (id)projectInfo:(id)arg1;
+ (id)defaultFileExtension;
+ (id)projectsRootName;
+ (id)defaultLocation;
+ (void)setDefaultLocation:(id)arg1;
+ (id)defaultDocumentName;
+ (BOOL)canResetUniqueIdentifierAtOpen:(id)arg1;
- (id)newDefaultProject:(id)arg1 type:(id)arg2;
- (id)initWithType:(id)arg1 project:(id)arg2 sequence:(id)arg3 error:(id *)arg4;
- (id)initWithCatalog:(id)arg1 store:(id)arg2 ofType:(id)arg3 validate:(BOOL)arg4 error:(id *)arg5;
- (BOOL)applyUpdate:(SEL)arg1;
- (BOOL)updateFromVersion:(int)arg1 error:(id *)arg2;

@end
