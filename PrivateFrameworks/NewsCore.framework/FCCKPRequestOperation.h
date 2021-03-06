/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRequestOperation : PBCodable <NSCopying> {
    FCCKPRequestOperationHeader * _header;
    FCCKPQueryRetrieveRequest * _queryRetrieveRequest;
    FCCKPRecordRetrieveRequest * _recordRetrieveRequest;
    FCCKPOperation * _request;
}

@property (nonatomic, readonly) BOOL hasHeader;
@property (nonatomic, readonly) BOOL hasQueryRetrieveRequest;
@property (nonatomic, readonly) BOOL hasRecordRetrieveRequest;
@property (nonatomic, readonly) BOOL hasRequest;
@property (nonatomic, retain) FCCKPRequestOperationHeader *header;
@property (nonatomic, retain) FCCKPQueryRetrieveRequest *queryRetrieveRequest;
@property (nonatomic, retain) FCCKPRecordRetrieveRequest *recordRetrieveRequest;
@property (nonatomic, retain) FCCKPOperation *request;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHeader;
- (BOOL)hasQueryRetrieveRequest;
- (BOOL)hasRecordRetrieveRequest;
- (BOOL)hasRequest;
- (unsigned int)hash;
- (id)header;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)queryRetrieveRequest;
- (BOOL)readFrom:(id)arg1;
- (id)recordRetrieveRequest;
- (id)request;
- (void)setHeader:(id)arg1;
- (void)setQueryRetrieveRequest:(id)arg1;
- (void)setRecordRetrieveRequest:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
