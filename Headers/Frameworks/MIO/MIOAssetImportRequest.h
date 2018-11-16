//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, NSDate, NSDictionary, NSString;

@interface MIOAssetImportRequest : NSObject
{
    AVAsset *_asset;
    CDStruct_e83c9415 _importRange;
    NSString *_clipID;
    NSString *_fileName;
    NSString *_destinationDirectoryPath;
    NSString *_destinationFilePath;
    NSString *_tempFileExtension;
    NSString *_cameraName;
    NSDate *_creationDate;
    long long _fileSize;
    NSDate *_importStartDate;
    BOOL _importCanceled;
    long long _bytesRead;
    BOOL _deviceRemoved;
    NSDictionary *_userData;
}

@property(readonly) long long fileSize; // @synthesize fileSize=_fileSize;
@property BOOL deviceRemoved; // @synthesize deviceRemoved=_deviceRemoved;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSDictionary *userData; // @synthesize userData=_userData;
@property long long bytesRead; // @synthesize bytesRead=_bytesRead;
@property BOOL importCanceled; // @synthesize importCanceled=_importCanceled;
@property(retain) NSDate *importStartDate; // @synthesize importStartDate=_importStartDate;
@property(readonly, copy) NSString *cameraName; // @synthesize cameraName=_cameraName;
@property(readonly, copy) NSString *tempFileExtension; // @synthesize tempFileExtension=_tempFileExtension;
@property(copy) NSString *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
@property(copy) NSString *destinationDirectoryPath; // @synthesize destinationDirectoryPath=_destinationDirectoryPath;
@property(readonly, copy) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, copy) NSString *clipID; // @synthesize clipID=_clipID;
@property(readonly) CDStruct_e83c9415 importRange; // @synthesize importRange=_importRange;
@property(readonly, retain) AVAsset *asset; // @synthesize asset=_asset;
- (id)generateDestinationFilePathUsingTempFileExtension:(BOOL)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 importRange:(CDStruct_e83c9415)arg2 clipID:(id)arg3 fileName:(id)arg4 destinationDirectoryPath:(id)arg5 tempFileExtension:(id)arg6 cameraName:(id)arg7 userData:(id)arg8;

@end

