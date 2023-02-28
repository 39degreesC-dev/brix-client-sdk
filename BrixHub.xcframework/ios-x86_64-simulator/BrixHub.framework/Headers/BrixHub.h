#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class BrixHubAppDatabaseCompanion, BrixHubCategory, BrixHubRuntimeQuery<__covariant RowType>, BrixHubContentVersion, BrixHubImageItem, BrixHubRemoteKey, BrixHubSoundSource, BrixHubSoundSourceData, BrixHubTemplate, BrixHubTextItem, BrixHubEditViewModelFactory, BrixHubNoticeViewModelFactory, BrixHubUploadVodUseCase, BrixHubDefaultBrixRepository, BrixHubBrixHubContainer, BrixHubUploadVod, BrixHubResponse<DATA>, BrixHubAppCustomData, BrixHubCategory_, BrixHubContentVersion_, BrixHubMainNotice, BrixHubNotice, BrixHubPagingResponse<DATA>, BrixHubSoundSourceData_, BrixHubSoundSource_, BrixHubTemplateData, BrixHubTemplate_, BrixHubServiceAsset, BrixHubNullResponse, BrixHubKotlinByteArray, BrixHubKtor_client_coreHttpClient, BrixHubKotlinEnumCompanion, BrixHubKotlinEnum<E>, BrixHubEditSimpleAction, BrixHubKotlinArray<T>, BrixHubViewModel<ACTION>, BrixHubObservable<T>, BrixHubFetchNotices, BrixHubFetchSoundSourceData, BrixHubFetchTemplateData, BrixHubFetchTemplates, BrixHubNoticeSimpleAction, BrixHubEditViewModel, BrixHubNoticeViewModel, BrixHubAppCustomDataCompanion, BrixHubCategory_Companion, BrixHubContentVersion_Companion, BrixHubMainNoticeCompanion, BrixHubNoticeCompanion, BrixHubNullResponseCompanion, BrixHubResponseCompanion, BrixHubPagingResponseCompanion, BrixHubServiceAssetGoods, BrixHubServiceAssetCompanion, BrixHubServiceAssetGoodsCompanion, BrixHubSoundSource_Companion, BrixHubSoundSourceData_Companion, BrixHubTemplate_Companion, BrixHubTemplateDataTextItem, BrixHubTemplateDataImageItem, BrixHubTemplateDataCompanion, BrixHubTemplateDataImageItemCompanion, BrixHubTemplateDataTextItemCompanion, BrixHubUploadVodCompanion, NSData, BrixHubRuntimeTransacterTransaction, BrixHubKotlinThrowable, BrixHubKotlinException, BrixHubKotlinRuntimeException, BrixHubKotlinIllegalStateException, BrixHubKotlinByteIterator, BrixHubKtor_client_coreHttpClientEngineConfig, BrixHubKtor_client_coreHttpClientConfig<T>, BrixHubKtor_eventsEvents, BrixHubKtor_client_coreHttpReceivePipeline, BrixHubKtor_client_coreHttpRequestPipeline, BrixHubKtor_client_coreHttpResponsePipeline, BrixHubKtor_client_coreHttpSendPipeline, BrixHubKtor_client_coreHttpRequestData, BrixHubKtor_client_coreHttpResponseData, BrixHubKotlinx_coroutines_coreCoroutineDispatcher, BrixHubKtor_client_coreProxyConfig, BrixHubKtor_utilsAttributeKey<T>, BrixHubKtor_eventsEventDefinition<T>, BrixHubKtor_utilsPipelinePhase, BrixHubKtor_utilsPipeline<TSubject, TContext>, BrixHubKtor_client_coreHttpReceivePipelinePhases, BrixHubKtor_client_coreHttpResponse, BrixHubKotlinUnit, BrixHubKtor_client_coreHttpRequestPipelinePhases, BrixHubKtor_client_coreHttpRequestBuilder, BrixHubKtor_client_coreHttpResponsePipelinePhases, BrixHubKtor_client_coreHttpResponseContainer, BrixHubKtor_client_coreHttpClientCall, BrixHubKtor_client_coreHttpSendPipelinePhases, BrixHubKotlinx_serialization_coreSerializersModule, BrixHubKotlinx_serialization_coreSerialKind, BrixHubKotlinNothing, BrixHubKtor_httpUrl, BrixHubKtor_httpHttpMethod, BrixHubKtor_httpOutgoingContent, BrixHubKtor_httpHttpStatusCode, BrixHubKtor_utilsGMTDate, BrixHubKtor_httpHttpProtocolVersion, BrixHubKotlinAbstractCoroutineContextElement, BrixHubKotlinx_coroutines_coreCoroutineDispatcherKey, BrixHubKtor_httpHeadersBuilder, BrixHubKtor_client_coreHttpRequestBuilderCompanion, BrixHubKtor_httpURLBuilder, BrixHubKtor_utilsTypeInfo, BrixHubKtor_client_coreHttpClientCallCompanion, BrixHubKtor_httpUrlCompanion, BrixHubKtor_httpURLProtocol, BrixHubKtor_httpHttpMethodCompanion, BrixHubKtor_httpContentType, BrixHubKotlinCancellationException, BrixHubKtor_httpHttpStatusCodeCompanion, BrixHubKtor_utilsGMTDateCompanion, BrixHubKtor_utilsWeekDay, BrixHubKtor_utilsMonth, BrixHubKtor_httpHttpProtocolVersionCompanion, BrixHubKotlinAbstractCoroutineContextKey<B, E>, BrixHubKtor_ioMemory, BrixHubKtor_ioChunkBuffer, BrixHubKtor_ioBuffer, BrixHubKtor_ioByteReadPacket, BrixHubKtor_utilsStringValuesBuilderImpl, BrixHubKtor_httpURLBuilderCompanion, BrixHubKtor_httpURLProtocolCompanion, BrixHubKtor_httpHeaderValueParam, BrixHubKtor_httpHeaderValueWithParametersCompanion, BrixHubKtor_httpHeaderValueWithParameters, BrixHubKtor_httpContentTypeCompanion, BrixHubKtor_utilsWeekDayCompanion, BrixHubKtor_utilsMonthCompanion, BrixHubKtor_ioMemoryCompanion, BrixHubKtor_ioBufferCompanion, BrixHubKtor_ioChunkBufferCompanion, BrixHubKtor_ioInputCompanion, BrixHubKtor_ioInput, BrixHubKtor_ioByteReadPacketCompanion, BrixHubKotlinKTypeProjection, BrixHubKotlinx_coroutines_coreAtomicDesc, BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, BrixHubKotlinKVariance, BrixHubKotlinKTypeProjectionCompanion, BrixHubKotlinx_coroutines_coreAtomicOp<__contravariant T>, BrixHubKotlinx_coroutines_coreOpDescriptor, BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode, BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol BrixHubCategoryQueries, BrixHubContentVersionQueries, BrixHubImageItemQueries, BrixHubRemoteKeyQueries, BrixHubSoundSourceDataQueries, BrixHubSoundSourceQueries, BrixHubTemplateQueries, BrixHubTextItemQueries, BrixHubRuntimeTransactionWithoutReturn, BrixHubRuntimeTransactionWithReturn, BrixHubRuntimeTransacter, BrixHubAppDatabase, BrixHubRuntimeSqlDriver, BrixHubRuntimeSqlDriverSchema, BrixHubBrixRepository, BrixHubContainer, BrixHubKotlinx_coroutines_coreCoroutineScope, BrixHubLocalBrixDataSource, BrixHubRemoteBrixDataSource, BrixHubKotlinComparable, BrixHubEditAction, BrixHubNoticeAction, BrixHubFactory, BrixHubKotlinx_serialization_coreKSerializer, BrixHubKotlinSuspendFunction0, BrixHubRuntimeTransactionCallbacks, BrixHubRuntimeSqlPreparedStatement, BrixHubRuntimeSqlCursor, BrixHubRuntimeCloseable, BrixHubRuntimeQueryListener, BrixHubKotlinCoroutineContext, BrixHubKtor_ioCloseable, BrixHubKtor_client_coreHttpClientEngine, BrixHubKtor_client_coreHttpClientEngineCapability, BrixHubKtor_utilsAttributes, BrixHubKotlinIterator, BrixHubKotlinx_serialization_coreEncoder, BrixHubKotlinx_serialization_coreSerialDescriptor, BrixHubKotlinx_serialization_coreSerializationStrategy, BrixHubKotlinx_serialization_coreDecoder, BrixHubKotlinx_serialization_coreDeserializationStrategy, BrixHubKotlinFunction, BrixHubKotlinCoroutineContextElement, BrixHubKotlinCoroutineContextKey, BrixHubKtor_client_coreHttpClientPlugin, BrixHubKotlinx_coroutines_coreDisposableHandle, BrixHubKotlinSuspendFunction2, BrixHubKotlinx_serialization_coreCompositeEncoder, BrixHubKotlinAnnotation, BrixHubKotlinx_serialization_coreCompositeDecoder, BrixHubKtor_httpHeaders, BrixHubKotlinx_coroutines_coreJob, BrixHubKotlinContinuation, BrixHubKotlinContinuationInterceptor, BrixHubKotlinx_coroutines_coreRunnable, BrixHubKtor_httpHttpMessage, BrixHubKtor_ioByteReadChannel, BrixHubKtor_httpHttpMessageBuilder, BrixHubKtor_client_coreHttpRequest, BrixHubKotlinx_serialization_coreSerializersModuleCollector, BrixHubKotlinKClass, BrixHubKtor_httpParameters, BrixHubKotlinMapEntry, BrixHubKtor_utilsStringValues, BrixHubKotlinx_coroutines_coreChildHandle, BrixHubKotlinx_coroutines_coreChildJob, BrixHubKotlinSequence, BrixHubKotlinx_coroutines_coreSelectClause0, BrixHubKtor_ioReadSession, BrixHubKotlinSuspendFunction1, BrixHubKotlinAppendable, BrixHubKtor_utilsStringValuesBuilder, BrixHubKtor_httpParametersBuilder, BrixHubKotlinKType, BrixHubKotlinKDeclarationContainer, BrixHubKotlinKAnnotatedElement, BrixHubKotlinKClassifier, BrixHubKotlinx_coroutines_coreParentJob, BrixHubKotlinx_coroutines_coreSelectInstance, BrixHubKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface BrixHubBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface BrixHubBase (BrixHubBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface BrixHubMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface BrixHubMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorBrixHubKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface BrixHubNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface BrixHubByte : BrixHubNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface BrixHubUByte : BrixHubNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface BrixHubShort : BrixHubNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface BrixHubUShort : BrixHubNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface BrixHubInt : BrixHubNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface BrixHubUInt : BrixHubNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface BrixHubLong : BrixHubNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface BrixHubULong : BrixHubNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface BrixHubFloat : BrixHubNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface BrixHubDouble : BrixHubNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface BrixHubBoolean : BrixHubNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("RuntimeTransacter")))
@protocol BrixHubRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<BrixHubRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<BrixHubRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((swift_name("AppDatabase")))
@protocol BrixHubAppDatabase <BrixHubRuntimeTransacter>
@required
@property (readonly) id<BrixHubCategoryQueries> categoryQueries __attribute__((swift_name("categoryQueries")));
@property (readonly) id<BrixHubContentVersionQueries> contentVersionQueries __attribute__((swift_name("contentVersionQueries")));
@property (readonly) id<BrixHubImageItemQueries> imageItemQueries __attribute__((swift_name("imageItemQueries")));
@property (readonly) id<BrixHubRemoteKeyQueries> remoteKeyQueries __attribute__((swift_name("remoteKeyQueries")));
@property (readonly) id<BrixHubSoundSourceDataQueries> soundSourceDataQueries __attribute__((swift_name("soundSourceDataQueries")));
@property (readonly) id<BrixHubSoundSourceQueries> soundSourceQueries __attribute__((swift_name("soundSourceQueries")));
@property (readonly) id<BrixHubTemplateQueries> templateQueries __attribute__((swift_name("templateQueries")));
@property (readonly) id<BrixHubTextItemQueries> textItemQueries __attribute__((swift_name("textItemQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDatabaseCompanion")))
@interface BrixHubAppDatabaseCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubAppDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubAppDatabase>)invokeDriver:(id<BrixHubRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<BrixHubRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Category")))
@interface BrixHubCategory : BrixHubBase
- (instancetype)initWithCategoryId:(int32_t)categoryId categoryType:(NSString *)categoryType categoryName:(NSString *)categoryName version:(NSString *)version __attribute__((swift_name("init(categoryId:categoryType:categoryName:version:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubCategory *)doCopyCategoryId:(int32_t)categoryId categoryType:(NSString *)categoryType categoryName:(NSString *)categoryName version:(NSString *)version __attribute__((swift_name("doCopy(categoryId:categoryType:categoryName:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t categoryId __attribute__((swift_name("categoryId")));
@property (readonly) NSString *categoryName __attribute__((swift_name("categoryName")));
@property (readonly) NSString *categoryType __attribute__((swift_name("categoryType")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("CategoryQueries")))
@protocol BrixHubCategoryQueries <BrixHubRuntimeTransacter>
@required
- (void)insertCategory:(BrixHubCategory *)Category __attribute__((swift_name("insert(Category:)")));
- (BrixHubRuntimeQuery<BrixHubCategory *> *)selectAll __attribute__((swift_name("selectAll()")));
- (BrixHubRuntimeQuery<id> *)selectAllMapper:(id (^)(BrixHubInt *, NSString *, NSString *, NSString *))mapper __attribute__((swift_name("selectAll(mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentVersion")))
@interface BrixHubContentVersion : BrixHubBase
- (instancetype)initWithVersion:(NSString *)version __attribute__((swift_name("init(version:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubContentVersion *)doCopyVersion:(NSString *)version __attribute__((swift_name("doCopy(version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("ContentVersionQueries")))
@protocol BrixHubContentVersionQueries <BrixHubRuntimeTransacter>
@required
- (void)delete __attribute__((swift_name("delete()")));
- (void)insertContentVersion:(BrixHubContentVersion *)ContentVersion __attribute__((swift_name("insert(ContentVersion:)")));
- (BrixHubRuntimeQuery<NSString *> *)select __attribute__((swift_name("select()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageItem")))
@interface BrixHubImageItem : BrixHubBase
- (instancetype)initWithTemplateId:(int32_t)templateId type:(NSString *)type url:(NSString *)url width:(float)width ratio:(float)ratio top:(float)top left:(float)left __attribute__((swift_name("init(templateId:type:url:width:ratio:top:left:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubImageItem *)doCopyTemplateId:(int32_t)templateId type:(NSString *)type url:(NSString *)url width:(float)width ratio:(float)ratio top:(float)top left:(float)left __attribute__((swift_name("doCopy(templateId:type:url:width:ratio:top:left:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) float ratio __attribute__((swift_name("ratio")));
@property (readonly) int32_t templateId __attribute__((swift_name("templateId")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("ImageItemQueries")))
@protocol BrixHubImageItemQueries <BrixHubRuntimeTransacter>
@required
- (void)deleteTemplateId:(int32_t)templateId __attribute__((swift_name("delete(templateId:)")));
- (void)insertImageItem:(BrixHubImageItem *)ImageItem __attribute__((swift_name("insert(ImageItem:)")));
- (BrixHubRuntimeQuery<BrixHubImageItem *> *)selectTemplateId:(int32_t)templateId __attribute__((swift_name("select(templateId:)")));
- (BrixHubRuntimeQuery<id> *)selectTemplateId:(int32_t)templateId mapper:(id (^)(BrixHubInt *, NSString *, NSString *, BrixHubFloat *, BrixHubFloat *, BrixHubFloat *, BrixHubFloat *))mapper __attribute__((swift_name("select(templateId:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Observable")))
@interface BrixHubObservable<T> : BrixHubBase
- (instancetype)initWithInitValue:(T _Nullable)initValue __attribute__((swift_name("init(initValue:)"))) __attribute__((objc_designated_initializer));
- (void)bindListener:(void (^)(T _Nullable))listener __attribute__((swift_name("bind(listener:)")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteKey")))
@interface BrixHubRemoteKey : BrixHubBase
- (instancetype)initWithSoundSourceId:(int32_t)soundSourceId nextKey:(BrixHubInt * _Nullable)nextKey __attribute__((swift_name("init(soundSourceId:nextKey:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubRemoteKey *)doCopySoundSourceId:(int32_t)soundSourceId nextKey:(BrixHubInt * _Nullable)nextKey __attribute__((swift_name("doCopy(soundSourceId:nextKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BrixHubInt * _Nullable nextKey __attribute__((swift_name("nextKey")));
@property (readonly) int32_t soundSourceId __attribute__((swift_name("soundSourceId")));
@end

__attribute__((swift_name("RemoteKeyQueries")))
@protocol BrixHubRemoteKeyQueries <BrixHubRuntimeTransacter>
@required
- (void)delete __attribute__((swift_name("delete()")));
- (void)deleteBySoundSourceIdSoundSourceId:(int32_t)soundSourceId __attribute__((swift_name("deleteBySoundSourceId(soundSourceId:)")));
- (void)insertRemoteKey:(BrixHubRemoteKey *)RemoteKey __attribute__((swift_name("insert(RemoteKey:)")));
- (BrixHubRuntimeQuery<BrixHubRemoteKey *> *)selectSoundSourceId:(int32_t)soundSourceId __attribute__((swift_name("select(soundSourceId:)")));
- (BrixHubRuntimeQuery<id> *)selectSoundSourceId:(int32_t)soundSourceId mapper:(id (^)(BrixHubInt *, BrixHubInt * _Nullable))mapper __attribute__((swift_name("select(soundSourceId:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSource")))
@interface BrixHubSoundSource : BrixHubBase
- (instancetype)initWithSoundSourceId:(int32_t)soundSourceId soundSourceType:(NSString *)soundSourceType soundSourceName:(NSString *)soundSourceName version:(NSString *)version __attribute__((swift_name("init(soundSourceId:soundSourceType:soundSourceName:version:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubSoundSource *)doCopySoundSourceId:(int32_t)soundSourceId soundSourceType:(NSString *)soundSourceType soundSourceName:(NSString *)soundSourceName version:(NSString *)version __attribute__((swift_name("doCopy(soundSourceId:soundSourceType:soundSourceName:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t soundSourceId __attribute__((swift_name("soundSourceId")));
@property (readonly) NSString *soundSourceName __attribute__((swift_name("soundSourceName")));
@property (readonly) NSString *soundSourceType __attribute__((swift_name("soundSourceType")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSourceData")))
@interface BrixHubSoundSourceData : BrixHubBase
- (instancetype)initWithSoundSourceId:(int32_t)soundSourceId filePath:(NSString *)filePath duration:(int64_t)duration __attribute__((swift_name("init(soundSourceId:filePath:duration:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubSoundSourceData *)doCopySoundSourceId:(int32_t)soundSourceId filePath:(NSString *)filePath duration:(int64_t)duration __attribute__((swift_name("doCopy(soundSourceId:filePath:duration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t duration __attribute__((swift_name("duration")));
@property (readonly) NSString *filePath __attribute__((swift_name("filePath")));
@property (readonly) int32_t soundSourceId __attribute__((swift_name("soundSourceId")));
@end

__attribute__((swift_name("SoundSourceDataQueries")))
@protocol BrixHubSoundSourceDataQueries <BrixHubRuntimeTransacter>
@required
- (void)deleteSoundSourceId:(int32_t)soundSourceId __attribute__((swift_name("delete(soundSourceId:)")));
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (void)insertSoundSourceData:(BrixHubSoundSourceData *)SoundSourceData __attribute__((swift_name("insert(SoundSourceData:)")));
- (BrixHubRuntimeQuery<BrixHubSoundSourceData *> *)selectSoundSourceId:(int32_t)soundSourceId __attribute__((swift_name("select(soundSourceId:)")));
- (BrixHubRuntimeQuery<id> *)selectSoundSourceId:(int32_t)soundSourceId mapper_:(id (^)(BrixHubInt *, NSString *, BrixHubLong *))mapper __attribute__((swift_name("select(soundSourceId:mapper_:)")));
@end

__attribute__((swift_name("SoundSourceQueries")))
@protocol BrixHubSoundSourceQueries <BrixHubRuntimeTransacter>
@required
- (BrixHubRuntimeQuery<BrixHubLong *> *)countSoundSources __attribute__((swift_name("countSoundSources()")));
- (void)insertSoundSource:(BrixHubSoundSource *)SoundSource __attribute__((swift_name("insert(SoundSource:)")));
- (BrixHubRuntimeQuery<BrixHubSoundSource *> *)select __attribute__((swift_name("select()")));
- (BrixHubRuntimeQuery<id> *)selectMapper:(id (^)(BrixHubInt *, NSString *, NSString *, NSString *))mapper __attribute__((swift_name("select(mapper:)")));
- (BrixHubRuntimeQuery<BrixHubSoundSource *> *)soundSourcesLimit:(int64_t)limit offset:(int64_t)offset __attribute__((swift_name("soundSources(limit:offset:)")));
- (BrixHubRuntimeQuery<id> *)soundSourcesLimit:(int64_t)limit offset:(int64_t)offset mapper:(id (^)(BrixHubInt *, NSString *, NSString *, NSString *))mapper __attribute__((swift_name("soundSources(limit:offset:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Template")))
@interface BrixHubTemplate : BrixHubBase
- (instancetype)initWithTemplateId:(int32_t)templateId templateName:(NSString *)templateName thumbnail:(NSString *)thumbnail categoryId:(int32_t)categoryId __attribute__((swift_name("init(templateId:templateName:thumbnail:categoryId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubTemplate *)doCopyTemplateId:(int32_t)templateId templateName:(NSString *)templateName thumbnail:(NSString *)thumbnail categoryId:(int32_t)categoryId __attribute__((swift_name("doCopy(templateId:templateName:thumbnail:categoryId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t categoryId __attribute__((swift_name("categoryId")));
@property (readonly) int32_t templateId __attribute__((swift_name("templateId")));
@property (readonly) NSString *templateName __attribute__((swift_name("templateName")));
@property (readonly) NSString *thumbnail __attribute__((swift_name("thumbnail")));
@end

__attribute__((swift_name("TemplateQueries")))
@protocol BrixHubTemplateQueries <BrixHubRuntimeTransacter>
@required
- (void)delete __attribute__((swift_name("delete()")));
- (void)insertTemplate:(BrixHubTemplate *)Template __attribute__((swift_name("insert(Template:)")));
- (BrixHubRuntimeQuery<BrixHubTemplate *> *)selectAllCategoryId:(int32_t)categoryId __attribute__((swift_name("selectAll(categoryId:)")));
- (BrixHubRuntimeQuery<id> *)selectAllCategoryId:(int32_t)categoryId mapper:(id (^)(BrixHubInt *, NSString *, NSString *, BrixHubInt *))mapper __attribute__((swift_name("selectAll(categoryId:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextItem")))
@interface BrixHubTextItem : BrixHubBase
- (instancetype)initWithTemplateId:(int32_t)templateId typeface:(NSString *)typeface placeholder:(NSString *)placeholder size:(float)size color:(NSString *)color align:(NSString *)align width:(float)width top:(float)top left:(float)left __attribute__((swift_name("init(templateId:typeface:placeholder:size:color:align:width:top:left:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubTextItem *)doCopyTemplateId:(int32_t)templateId typeface:(NSString *)typeface placeholder:(NSString *)placeholder size:(float)size color:(NSString *)color align:(NSString *)align width:(float)width top:(float)top left:(float)left __attribute__((swift_name("doCopy(templateId:typeface:placeholder:size:color:align:width:top:left:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *align __attribute__((swift_name("align")));
@property (readonly) NSString *color __attribute__((swift_name("color")));
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) NSString *placeholder __attribute__((swift_name("placeholder")));
@property (readonly) float size __attribute__((swift_name("size")));
@property (readonly) int32_t templateId __attribute__((swift_name("templateId")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) NSString *typeface __attribute__((swift_name("typeface")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("TextItemQueries")))
@protocol BrixHubTextItemQueries <BrixHubRuntimeTransacter>
@required
- (void)deleteTemplateId:(int32_t)templateId __attribute__((swift_name("delete(templateId:)")));
- (void)insertTextItem:(BrixHubTextItem *)TextItem __attribute__((swift_name("insert(TextItem:)")));
- (BrixHubRuntimeQuery<BrixHubTextItem *> *)selectTemplateId:(int32_t)templateId __attribute__((swift_name("select(templateId:)")));
- (BrixHubRuntimeQuery<id> *)selectTemplateId:(int32_t)templateId mapper_:(id (^)(BrixHubInt *, NSString *, NSString *, BrixHubFloat *, NSString *, NSString *, BrixHubFloat *, BrixHubFloat *, BrixHubFloat *))mapper __attribute__((swift_name("select(templateId:mapper_:)")));
@end

__attribute__((swift_name("Container")))
@protocol BrixHubContainer
@required
@property (readonly) id<BrixHubBrixRepository> brixRepository __attribute__((swift_name("brixRepository")));
@property (readonly) BrixHubEditViewModelFactory *editViewModelFactory __attribute__((swift_name("editViewModelFactory")));
@property (readonly) BrixHubNoticeViewModelFactory *noticeViewModelFactory __attribute__((swift_name("noticeViewModelFactory")));
@property (readonly) BrixHubUploadVodUseCase *uploadVodUseCase __attribute__((swift_name("uploadVodUseCase")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppContainer")))
@interface BrixHubAppContainer : BrixHubBase <BrixHubContainer>
@property (readonly) BrixHubDefaultBrixRepository *brixRepository __attribute__((swift_name("brixRepository")));
@property (readonly) BrixHubEditViewModelFactory *editViewModelFactory __attribute__((swift_name("editViewModelFactory")));
@property (readonly) BrixHubNoticeViewModelFactory *noticeViewModelFactory __attribute__((swift_name("noticeViewModelFactory")));
@property (readonly) BrixHubUploadVodUseCase *uploadVodUseCase __attribute__((swift_name("uploadVodUseCase")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrixHubContainer")))
@interface BrixHubBrixHubContainer : BrixHubBase <BrixHubContainer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)brixHubContainer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubBrixHubContainer *shared __attribute__((swift_name("shared")));
@property (readonly) id<BrixHubBrixRepository> brixRepository __attribute__((swift_name("brixRepository")));
@property (readonly) BrixHubEditViewModelFactory *editViewModelFactory __attribute__((swift_name("editViewModelFactory")));
@property (readonly) BrixHubNoticeViewModelFactory *noticeViewModelFactory __attribute__((swift_name("noticeViewModelFactory")));
@property (readonly) BrixHubUploadVodUseCase *uploadVodUseCase __attribute__((swift_name("uploadVodUseCase")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadVodUseCase")))
@interface BrixHubUploadVodUseCase : BrixHubBase
- (instancetype)initWithRepository:(id<BrixHubBrixRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeFilePath:(NSString *)filePath fileName:(NSString *)fileName completionHandler:(void (^)(BrixHubResponse<BrixHubUploadVod *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(filePath:fileName:completionHandler:)")));
@end

__attribute__((swift_name("BrixRepository")))
@protocol BrixHubBrixRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppCustomDataWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubAppCustomData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppCustomData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCategoriesWithCompletionHandler:(void (^)(BrixHubResponse<NSArray<BrixHubCategory_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCategories(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getContentVersionWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubContentVersion_ *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getContentVersion(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMainNoticeWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubMainNotice *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMainNotice(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNoticesPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize completionHandler:(void (^)(BrixHubPagingResponse<NSArray<BrixHubNotice *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNotices(pageNumber:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSoundSourceSoundSourceId:(int32_t)soundSourceId completionHandler:(void (^)(BrixHubResponse<BrixHubSoundSourceData_ *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSoundSource(soundSourceId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSoundSourcesWithCompletionHandler:(void (^)(BrixHubResponse<NSArray<BrixHubSoundSource_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSoundSources(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplateDetailTemplateId:(int32_t)templateId completionHandler:(void (^)(BrixHubResponse<BrixHubTemplateData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplateDetail(templateId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplatesCategoryId:(int32_t)categoryId completionHandler:(void (^)(BrixHubResponse<NSArray<BrixHubTemplate_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplates(categoryId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postServiceAssetServiceAsset:(BrixHubServiceAsset *)serviceAsset completionHandler:(void (^)(BrixHubNullResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postServiceAsset(serviceAsset:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadVodFile:(BrixHubKotlinByteArray *)file fileName:(NSString *)fileName completionHandler:(void (^)(BrixHubResponse<BrixHubUploadVod *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadVod(file:fileName:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateCacheWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateCache(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultBrixRepository")))
@interface BrixHubDefaultBrixRepository : BrixHubBase <BrixHubBrixRepository>
- (instancetype)initWithApplicationScope:(id<BrixHubKotlinx_coroutines_coreCoroutineScope>)applicationScope localDataSource:(id<BrixHubLocalBrixDataSource>)localDataSource remoteDataSource:(id<BrixHubRemoteBrixDataSource>)remoteDataSource __attribute__((swift_name("init(applicationScope:localDataSource:remoteDataSource:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppCustomDataWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubAppCustomData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppCustomData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCategoriesWithCompletionHandler:(void (^)(BrixHubResponse<NSArray<BrixHubCategory_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCategories(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getContentVersionWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubContentVersion_ *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getContentVersion(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMainNoticeWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubMainNotice *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMainNotice(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNoticesPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize completionHandler:(void (^)(BrixHubPagingResponse<NSArray<BrixHubNotice *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNotices(pageNumber:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSoundSourceSoundSourceId:(int32_t)soundSourceId completionHandler:(void (^)(BrixHubResponse<BrixHubSoundSourceData_ *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSoundSource(soundSourceId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSoundSourcesWithCompletionHandler:(void (^)(BrixHubResponse<NSArray<BrixHubSoundSource_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSoundSources(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplateDetailTemplateId:(int32_t)templateId completionHandler:(void (^)(BrixHubResponse<BrixHubTemplateData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplateDetail(templateId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplatesCategoryId:(int32_t)categoryId completionHandler:(void (^)(BrixHubResponse<NSArray<BrixHubTemplate_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplates(categoryId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postServiceAssetServiceAsset:(BrixHubServiceAsset *)serviceAsset completionHandler:(void (^)(BrixHubNullResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postServiceAsset(serviceAsset:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadVodFile:(BrixHubKotlinByteArray *)file fileName:(NSString *)fileName completionHandler:(void (^)(BrixHubResponse<BrixHubUploadVod *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadVod(file:fileName:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateCacheWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateCache(completionHandler:)")));
@end

__attribute__((swift_name("LocalBrixDataSource")))
@protocol BrixHubLocalBrixDataSource <BrixHubAppDatabase>
@required
- (BrixHubResponse<NSArray<BrixHubCategory_ *> *> *)getCategories __attribute__((swift_name("getCategories()")));
- (BrixHubResponse<BrixHubContentVersion_ *> *)getContentVersion __attribute__((swift_name("getContentVersion()")));
- (BrixHubResponse<BrixHubSoundSourceData_ *> *)getSoundSourceSoundSourceId:(int32_t)soundSourceId __attribute__((swift_name("getSoundSource(soundSourceId:)")));
- (BrixHubResponse<NSArray<BrixHubSoundSource_ *> *> *)getSoundSources __attribute__((swift_name("getSoundSources()")));
- (BrixHubResponse<BrixHubTemplateData *> *)getTemplateDetailTemplateId:(int32_t)templateId __attribute__((swift_name("getTemplateDetail(templateId:)")));
- (BrixHubResponse<NSArray<BrixHubTemplate_ *> *> *)getTemplatesCategoryId:(int32_t)categoryId __attribute__((swift_name("getTemplates(categoryId:)")));
- (void)updateCategoriesCategories:(NSArray<BrixHubCategory_ *> *)categories newVersion:(NSString *)newVersion onEach:(void (^)(BrixHubInt *))onEach __attribute__((swift_name("updateCategories(categories:newVersion:onEach:)")));
- (void)updateContentVersionVersion:(NSString *)version __attribute__((swift_name("updateContentVersion(version:)")));
- (void)updateSoundSourceDataSoundSourceId:(int32_t)soundSourceId soundSourceData:(BrixHubSoundSourceData_ *)soundSourceData __attribute__((swift_name("updateSoundSourceData(soundSourceId:soundSourceData:)")));
- (void)updateSoundSourcesSoundSources:(NSArray<BrixHubSoundSource_ *> *)soundSources newVersion:(NSString *)newVersion onEach:(void (^)(BrixHubInt *))onEach __attribute__((swift_name("updateSoundSources(soundSources:newVersion:onEach:)")));
- (void)updateTemplateDataTemplateId:(int32_t)templateId templateData:(BrixHubTemplateData *)templateData __attribute__((swift_name("updateTemplateData(templateId:templateData:)")));
- (void)updateTemplatesCategoryId:(int32_t)categoryId templates:(NSArray<BrixHubTemplate_ *> *)templates onEach:(void (^)(BrixHubInt *))onEach __attribute__((swift_name("updateTemplates(categoryId:templates:onEach:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalBrixDataSourceImpl")))
@interface BrixHubLocalBrixDataSourceImpl : BrixHubBase <BrixHubLocalBrixDataSource, BrixHubAppDatabase>
- (instancetype)initWithDatabase:(id<BrixHubAppDatabase>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));
- (BrixHubResponse<NSArray<BrixHubCategory_ *> *> *)getCategories __attribute__((swift_name("getCategories()")));
- (BrixHubResponse<BrixHubContentVersion_ *> *)getContentVersion __attribute__((swift_name("getContentVersion()")));
- (BrixHubResponse<BrixHubSoundSourceData_ *> *)getSoundSourceSoundSourceId:(int32_t)soundSourceId __attribute__((swift_name("getSoundSource(soundSourceId:)")));
- (BrixHubResponse<NSArray<BrixHubSoundSource_ *> *> *)getSoundSources __attribute__((swift_name("getSoundSources()")));
- (BrixHubResponse<BrixHubTemplateData *> *)getTemplateDetailTemplateId:(int32_t)templateId __attribute__((swift_name("getTemplateDetail(templateId:)")));
- (BrixHubResponse<NSArray<BrixHubTemplate_ *> *> *)getTemplatesCategoryId:(int32_t)categoryId __attribute__((swift_name("getTemplates(categoryId:)")));
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<BrixHubRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<BrixHubRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
- (void)updateCategoriesCategories:(NSArray<BrixHubCategory_ *> *)categories newVersion:(NSString *)newVersion onEach:(void (^)(BrixHubInt *))onEach __attribute__((swift_name("updateCategories(categories:newVersion:onEach:)")));
- (void)updateContentVersionVersion:(NSString *)version __attribute__((swift_name("updateContentVersion(version:)")));
- (void)updateSoundSourceDataSoundSourceId:(int32_t)soundSourceId soundSourceData:(BrixHubSoundSourceData_ *)soundSourceData __attribute__((swift_name("updateSoundSourceData(soundSourceId:soundSourceData:)")));
- (void)updateSoundSourcesSoundSources:(NSArray<BrixHubSoundSource_ *> *)soundSources newVersion:(NSString *)newVersion onEach:(void (^)(BrixHubInt *))onEach __attribute__((swift_name("updateSoundSources(soundSources:newVersion:onEach:)")));
- (void)updateTemplateDataTemplateId:(int32_t)templateId templateData:(BrixHubTemplateData *)templateData __attribute__((swift_name("updateTemplateData(templateId:templateData:)")));
- (void)updateTemplatesCategoryId:(int32_t)categoryId templates:(NSArray<BrixHubTemplate_ *> *)templates onEach:(void (^)(BrixHubInt *))onEach __attribute__((swift_name("updateTemplates(categoryId:templates:onEach:)")));
@property (readonly) id<BrixHubCategoryQueries> categoryQueries __attribute__((swift_name("categoryQueries")));
@property (readonly) id<BrixHubContentVersionQueries> contentVersionQueries __attribute__((swift_name("contentVersionQueries")));
@property (readonly) id<BrixHubImageItemQueries> imageItemQueries __attribute__((swift_name("imageItemQueries")));
@property (readonly) id<BrixHubRemoteKeyQueries> remoteKeyQueries __attribute__((swift_name("remoteKeyQueries")));
@property (readonly) id<BrixHubSoundSourceDataQueries> soundSourceDataQueries __attribute__((swift_name("soundSourceDataQueries")));
@property (readonly) id<BrixHubSoundSourceQueries> soundSourceQueries __attribute__((swift_name("soundSourceQueries")));
@property (readonly) id<BrixHubTemplateQueries> templateQueries __attribute__((swift_name("templateQueries")));
@property (readonly) id<BrixHubTextItemQueries> textItemQueries __attribute__((swift_name("textItemQueries")));
@end

__attribute__((swift_name("RemoteBrixDataSource")))
@protocol BrixHubRemoteBrixDataSource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppCustomDataWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubAppCustomData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppCustomData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCategoriesWithCompletionHandler:(void (^)(BrixHubResponse<NSArray<BrixHubCategory_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCategories(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getContentVersionWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubContentVersion_ *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getContentVersion(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMainNoticeWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubMainNotice *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMainNotice(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNoticesPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize completionHandler:(void (^)(BrixHubPagingResponse<NSArray<BrixHubNotice *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNotices(pageNumber:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSoundSourceSoundSourceId:(int32_t)soundSourceId completionHandler:(void (^)(BrixHubResponse<BrixHubSoundSourceData_ *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSoundSource(soundSourceId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSoundSourcesPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize completionHandler:(void (^)(BrixHubPagingResponse<NSArray<BrixHubSoundSource_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSoundSources(pageNumber:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplateDetailTemplateId:(int32_t)templateId completionHandler:(void (^)(BrixHubResponse<BrixHubTemplateData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplateDetail(templateId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplatesCategoryId:(int32_t)categoryId completionHandler:(void (^)(BrixHubResponse<NSArray<BrixHubTemplate_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplates(categoryId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postServiceAssetServiceAsset:(BrixHubServiceAsset *)serviceAsset completionHandler:(void (^)(BrixHubNullResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postServiceAsset(serviceAsset:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadVodFile:(BrixHubKotlinByteArray *)file fileName:(NSString *)fileName completionHandler:(void (^)(BrixHubResponse<BrixHubUploadVod *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadVod(file:fileName:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteBrixDataSourceImpl")))
@interface BrixHubRemoteBrixDataSourceImpl : BrixHubBase <BrixHubRemoteBrixDataSource>
- (instancetype)initWithHttpClient:(BrixHubKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(httpClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppCustomDataWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubAppCustomData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppCustomData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCategoriesWithCompletionHandler:(void (^)(BrixHubResponse<NSArray<BrixHubCategory_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCategories(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getContentVersionWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubContentVersion_ *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getContentVersion(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMainNoticeWithCompletionHandler:(void (^)(BrixHubResponse<BrixHubMainNotice *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMainNotice(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNoticesPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize completionHandler:(void (^)(BrixHubPagingResponse<NSArray<BrixHubNotice *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNotices(pageNumber:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSoundSourceSoundSourceId:(int32_t)soundSourceId completionHandler:(void (^)(BrixHubResponse<BrixHubSoundSourceData_ *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSoundSource(soundSourceId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSoundSourcesPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize completionHandler:(void (^)(BrixHubPagingResponse<NSArray<BrixHubSoundSource_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSoundSources(pageNumber:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplateDetailTemplateId:(int32_t)templateId completionHandler:(void (^)(BrixHubResponse<BrixHubTemplateData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplateDetail(templateId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplatesCategoryId:(int32_t)categoryId completionHandler:(void (^)(BrixHubResponse<NSArray<BrixHubTemplate_ *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplates(categoryId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postServiceAssetServiceAsset:(BrixHubServiceAsset *)serviceAsset completionHandler:(void (^)(BrixHubNullResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postServiceAsset(serviceAsset:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadVodFile:(BrixHubKotlinByteArray *)file fileName:(NSString *)fileName completionHandler:(void (^)(BrixHubResponse<BrixHubUploadVod *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadVod(file:fileName:completionHandler:)")));
@end

__attribute__((swift_name("ContextViewModel")))
@interface BrixHubContextViewModel<ACTION> : BrixHubBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onCleared __attribute__((swift_name("onCleared()")));
- (void)triggerAction:(ACTION _Nullable)action __attribute__((swift_name("trigger(action:)")));
@end

__attribute__((swift_name("EditAction")))
@protocol BrixHubEditAction
@required
@end

__attribute__((swift_name("KotlinComparable")))
@protocol BrixHubKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface BrixHubKotlinEnum<E> : BrixHubBase <BrixHubKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditSimpleAction")))
@interface BrixHubEditSimpleAction : BrixHubKotlinEnum<BrixHubEditSimpleAction *> <BrixHubEditAction>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BrixHubEditSimpleAction *fetchCategories __attribute__((swift_name("fetchCategories")));
@property (class, readonly) BrixHubEditSimpleAction *fetchSoundSources __attribute__((swift_name("fetchSoundSources")));
@property (class, readonly) BrixHubEditSimpleAction *updateCache __attribute__((swift_name("updateCache")));
+ (BrixHubKotlinArray<BrixHubEditSimpleAction *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("ViewModel")))
@interface BrixHubViewModel<ACTION> : BrixHubBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onCleared __attribute__((swift_name("onCleared()")));
- (void)triggerAction:(ACTION _Nullable)action __attribute__((swift_name("trigger(action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditViewModel")))
@interface BrixHubEditViewModel : BrixHubViewModel<id<BrixHubEditAction>>
- (instancetype)initWithRepository:(id<BrixHubBrixRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)triggerAction:(id<BrixHubEditAction>)action __attribute__((swift_name("trigger(action:)")));
- (void)triggerSimpleAction:(BrixHubEditSimpleAction *)simpleAction __attribute__((swift_name("trigger(simpleAction:)")));
@property (readonly) BrixHubObservable<NSArray<BrixHubCategory_ *> *> *categories __attribute__((swift_name("categories")));
@property (readonly) BrixHubObservable<BrixHubSoundSourceData_ *> *soundSource __attribute__((swift_name("soundSource")));
@property (readonly) BrixHubObservable<NSArray<BrixHubSoundSource_ *> *> *soundSources __attribute__((swift_name("soundSources")));
@property (readonly) BrixHubObservable<BrixHubTemplateData *> *templateData __attribute__((swift_name("templateData")));
@property (readonly) BrixHubObservable<NSArray<BrixHubTemplate_ *> *> *templates __attribute__((swift_name("templates")));
@end

__attribute__((swift_name("NoticeAction")))
@protocol BrixHubNoticeAction
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetchNotices")))
@interface BrixHubFetchNotices : BrixHubBase <BrixHubNoticeAction>
- (instancetype)initWithPageNo:(int32_t)pageNo pageSize:(int32_t)pageSize __attribute__((swift_name("init(pageNo:pageSize:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubFetchNotices *)doCopyPageNo:(int32_t)pageNo pageSize:(int32_t)pageSize __attribute__((swift_name("doCopy(pageNo:pageSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t pageNo __attribute__((swift_name("pageNo")));
@property (readonly) int32_t pageSize __attribute__((swift_name("pageSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetchSoundSourceData")))
@interface BrixHubFetchSoundSourceData : BrixHubBase <BrixHubEditAction>
- (instancetype)initWithSoundSourceId:(int32_t)soundSourceId __attribute__((swift_name("init(soundSourceId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubFetchSoundSourceData *)doCopySoundSourceId:(int32_t)soundSourceId __attribute__((swift_name("doCopy(soundSourceId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t soundSourceId __attribute__((swift_name("soundSourceId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetchTemplateData")))
@interface BrixHubFetchTemplateData : BrixHubBase <BrixHubEditAction>
- (instancetype)initWithTemplateId:(int32_t)templateId __attribute__((swift_name("init(templateId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubFetchTemplateData *)doCopyTemplateId:(int32_t)templateId __attribute__((swift_name("doCopy(templateId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t templateId __attribute__((swift_name("templateId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetchTemplates")))
@interface BrixHubFetchTemplates : BrixHubBase <BrixHubEditAction>
- (instancetype)initWithCategoryId:(int32_t)categoryId __attribute__((swift_name("init(categoryId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubFetchTemplates *)doCopyCategoryId:(int32_t)categoryId __attribute__((swift_name("doCopy(categoryId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t categoryId __attribute__((swift_name("categoryId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeSimpleAction")))
@interface BrixHubNoticeSimpleAction : BrixHubKotlinEnum<BrixHubNoticeSimpleAction *> <BrixHubNoticeAction>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BrixHubNoticeSimpleAction *fetchMainNotice __attribute__((swift_name("fetchMainNotice")));
+ (BrixHubKotlinArray<BrixHubNoticeSimpleAction *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeViewModel")))
@interface BrixHubNoticeViewModel : BrixHubViewModel<id<BrixHubNoticeAction>>
- (instancetype)initWithBrixRepository:(id<BrixHubBrixRepository>)brixRepository __attribute__((swift_name("init(brixRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)triggerAction:(id<BrixHubNoticeAction>)action __attribute__((swift_name("trigger(action:)")));
- (void)triggerSimpleAction:(BrixHubNoticeSimpleAction *)simpleAction __attribute__((swift_name("trigger(simpleAction:)")));
@property (readonly) BrixHubObservable<BrixHubMainNotice *> *mainNotice __attribute__((swift_name("mainNotice")));
@property (readonly) BrixHubObservable<NSArray<BrixHubNotice *> *> *notices __attribute__((swift_name("notices")));
@end

__attribute__((swift_name("Factory")))
@protocol BrixHubFactory
@required
- (id _Nullable)create __attribute__((swift_name("create()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditViewModelFactory")))
@interface BrixHubEditViewModelFactory : BrixHubBase <BrixHubFactory>
- (instancetype)initWithBrixRepository:(id<BrixHubBrixRepository>)brixRepository __attribute__((swift_name("init(brixRepository:)"))) __attribute__((objc_designated_initializer));
- (BrixHubEditViewModel *)create __attribute__((swift_name("create()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeViewModelFactory")))
@interface BrixHubNoticeViewModelFactory : BrixHubBase <BrixHubFactory>
- (instancetype)initWithBrixRepository:(id<BrixHubBrixRepository>)brixRepository __attribute__((swift_name("init(brixRepository:)"))) __attribute__((objc_designated_initializer));
- (BrixHubNoticeViewModel *)create __attribute__((swift_name("create()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppCustomData")))
@interface BrixHubAppCustomData : BrixHubBase
- (instancetype)initWithBgMode:(NSString *)bgMode tintColor:(NSString *)tintColor iconSet:(NSString *)iconSet __attribute__((swift_name("init(bgMode:tintColor:iconSet:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubAppCustomDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubAppCustomData *)doCopyBgMode:(NSString *)bgMode tintColor:(NSString *)tintColor iconSet:(NSString *)iconSet __attribute__((swift_name("doCopy(bgMode:tintColor:iconSet:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bgMode __attribute__((swift_name("bgMode")));
@property (readonly) NSString *iconSet __attribute__((swift_name("iconSet")));
@property (readonly) NSString *tintColor __attribute__((swift_name("tintColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppCustomData.Companion")))
@interface BrixHubAppCustomDataCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubAppCustomDataCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Category_")))
@interface BrixHubCategory_ : BrixHubBase
- (instancetype)initWithCategoryID:(int32_t)categoryID categoryType:(NSString *)categoryType categoryName:(NSString *)categoryName __attribute__((swift_name("init(categoryID:categoryType:categoryName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubCategory_Companion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubCategory_ *)doCopyCategoryID:(int32_t)categoryID categoryType:(NSString *)categoryType categoryName:(NSString *)categoryName __attribute__((swift_name("doCopy(categoryID:categoryType:categoryName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t categoryID __attribute__((swift_name("categoryID")));
@property (readonly) NSString *categoryName __attribute__((swift_name("categoryName")));
@property (readonly) NSString *categoryType __attribute__((swift_name("categoryType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Category_.Companion")))
@interface BrixHubCategory_Companion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubCategory_Companion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentVersion_")))
@interface BrixHubContentVersion_ : BrixHubBase
- (instancetype)initWithDate:(NSString *)date __attribute__((swift_name("init(date:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubContentVersion_Companion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubContentVersion_ *)doCopyDate:(NSString *)date __attribute__((swift_name("doCopy(date:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *date __attribute__((swift_name("date")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentVersion_.Companion")))
@interface BrixHubContentVersion_Companion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubContentVersion_Companion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainNotice")))
@interface BrixHubMainNotice : BrixHubBase
- (instancetype)initWithNoticeID:(int32_t)noticeID title:(NSString *)title contentType:(NSString *)contentType content:(NSString *)content mainStartDate:(NSString *)mainStartDate mainEndDate:(NSString *)mainEndDate createDate:(NSString *)createDate __attribute__((swift_name("init(noticeID:title:contentType:content:mainStartDate:mainEndDate:createDate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubMainNoticeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubMainNotice *)doCopyNoticeID:(int32_t)noticeID title:(NSString *)title contentType:(NSString *)contentType content:(NSString *)content mainStartDate:(NSString *)mainStartDate mainEndDate:(NSString *)mainEndDate createDate:(NSString *)createDate __attribute__((swift_name("doCopy(noticeID:title:contentType:content:mainStartDate:mainEndDate:createDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString *createDate __attribute__((swift_name("createDate")));
@property (readonly) NSString *mainEndDate __attribute__((swift_name("mainEndDate")));
@property (readonly) NSString *mainStartDate __attribute__((swift_name("mainStartDate")));
@property (readonly) int32_t noticeID __attribute__((swift_name("noticeID")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainNotice.Companion")))
@interface BrixHubMainNoticeCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubMainNoticeCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Notice")))
@interface BrixHubNotice : BrixHubBase
- (instancetype)initWithNoticeID:(int32_t)noticeID mainExposureYN:(NSString *)mainExposureYN title:(NSString *)title contentType:(NSString *)contentType content:(NSString *)content startDate:(NSString *)startDate endDate:(NSString *)endDate mainStartDate:(NSString *)mainStartDate mainEndDate:(NSString *)mainEndDate createDate:(NSString *)createDate __attribute__((swift_name("init(noticeID:mainExposureYN:title:contentType:content:startDate:endDate:mainStartDate:mainEndDate:createDate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubNoticeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubNotice *)doCopyNoticeID:(int32_t)noticeID mainExposureYN:(NSString *)mainExposureYN title:(NSString *)title contentType:(NSString *)contentType content:(NSString *)content startDate:(NSString *)startDate endDate:(NSString *)endDate mainStartDate:(NSString *)mainStartDate mainEndDate:(NSString *)mainEndDate createDate:(NSString *)createDate __attribute__((swift_name("doCopy(noticeID:mainExposureYN:title:contentType:content:startDate:endDate:mainStartDate:mainEndDate:createDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString *createDate __attribute__((swift_name("createDate")));
@property (readonly) NSString *endDate __attribute__((swift_name("endDate")));
@property (readonly) NSString *mainEndDate __attribute__((swift_name("mainEndDate")));
@property (readonly) NSString *mainExposureYN __attribute__((swift_name("mainExposureYN")));
@property (readonly) NSString *mainStartDate __attribute__((swift_name("mainStartDate")));
@property (readonly) int32_t noticeID __attribute__((swift_name("noticeID")));
@property (readonly) NSString *startDate __attribute__((swift_name("startDate")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Notice.Companion")))
@interface BrixHubNoticeCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubNoticeCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NullResponse")))
@interface BrixHubNullResponse : BrixHubBase
- (instancetype)initWithResultStatus:(int32_t)resultStatus resultMessage:(NSString *)resultMessage __attribute__((swift_name("init(resultStatus:resultMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubNullResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *resultMessage __attribute__((swift_name("resultMessage")));
@property (readonly) int32_t resultStatus __attribute__((swift_name("resultStatus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NullResponse.Companion")))
@interface BrixHubNullResponseCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubNullResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Response")))
@interface BrixHubResponse<DATA> : BrixHubBase
- (instancetype)initWithResultStatus:(int32_t)resultStatus resultMessage:(NSString *)resultMessage data:(DATA _Nullable)data __attribute__((swift_name("init(resultStatus:resultMessage:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) DATA _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *resultMessage __attribute__((swift_name("resultMessage")));
@property (readonly) int32_t resultStatus __attribute__((swift_name("resultStatus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagingResponse")))
@interface BrixHubPagingResponse<DATA> : BrixHubResponse<DATA>
- (instancetype)initWithPageNo:(int32_t)pageNo pageSize:(int32_t)pageSize pageCount:(int32_t)pageCount totalCount:(int32_t)totalCount __attribute__((swift_name("init(pageNo:pageSize:pageCount:totalCount:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithResultStatus:(int32_t)resultStatus resultMessage:(NSString *)resultMessage data:(id _Nullable)data __attribute__((swift_name("init(resultStatus:resultMessage:data:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubPagingResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t pageCount __attribute__((swift_name("pageCount")));
@property (readonly) int32_t pageNo __attribute__((swift_name("pageNo")));
@property (readonly) int32_t pageSize __attribute__((swift_name("pageSize")));
@property (readonly) int32_t totalCount __attribute__((swift_name("totalCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagingResponseCompanion")))
@interface BrixHubPagingResponseCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubPagingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BrixHubKotlinArray<id<BrixHubKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<BrixHubKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseCompanion")))
@interface BrixHubResponseCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BrixHubKotlinArray<id<BrixHubKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<BrixHubKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceAsset")))
@interface BrixHubServiceAsset : BrixHubBase
- (instancetype)initWithUserID:(NSString *)userID userName:(NSString *)userName tag:(NSArray<NSString *> *)tag assetName:(NSString *)assetName description:(NSString *)description uploadPath:(NSString *)uploadPath uploadFileName:(NSString *)uploadFileName goods:(NSArray<BrixHubServiceAssetGoods *> *)goods __attribute__((swift_name("init(userID:userName:tag:assetName:description:uploadPath:uploadFileName:goods:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubServiceAssetCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<BrixHubServiceAssetGoods *> *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubServiceAsset *)doCopyUserID:(NSString *)userID userName:(NSString *)userName tag:(NSArray<NSString *> *)tag assetName:(NSString *)assetName description:(NSString *)description uploadPath:(NSString *)uploadPath uploadFileName:(NSString *)uploadFileName goods:(NSArray<BrixHubServiceAssetGoods *> *)goods __attribute__((swift_name("doCopy(userID:userName:tag:assetName:description:uploadPath:uploadFileName:goods:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *assetName __attribute__((swift_name("assetName")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<BrixHubServiceAssetGoods *> *goods __attribute__((swift_name("goods")));
@property (readonly) NSArray<NSString *> *tag __attribute__((swift_name("tag")));
@property (readonly) NSString *uploadFileName __attribute__((swift_name("uploadFileName")));
@property (readonly) NSString *uploadPath __attribute__((swift_name("uploadPath")));
@property (readonly) NSString *userID __attribute__((swift_name("userID")));
@property (readonly) NSString *userName __attribute__((swift_name("userName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceAsset.Companion")))
@interface BrixHubServiceAssetCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubServiceAssetCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceAssetGoods")))
@interface BrixHubServiceAssetGoods : BrixHubBase
- (instancetype)initWithGoodsID:(NSString *)goodsID goodsName:(NSString *)goodsName goodsImage:(NSString *)goodsImage goodsUrl:(NSString *)goodsUrl salePrice:(int32_t)salePrice __attribute__((swift_name("init(goodsID:goodsName:goodsImage:goodsUrl:salePrice:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubServiceAssetGoodsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubServiceAssetGoods *)doCopyGoodsID:(NSString *)goodsID goodsName:(NSString *)goodsName goodsImage:(NSString *)goodsImage goodsUrl:(NSString *)goodsUrl salePrice:(int32_t)salePrice __attribute__((swift_name("doCopy(goodsID:goodsName:goodsImage:goodsUrl:salePrice:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *goodsID __attribute__((swift_name("goodsID")));
@property (readonly) NSString *goodsImage __attribute__((swift_name("goodsImage")));
@property (readonly) NSString *goodsName __attribute__((swift_name("goodsName")));
@property (readonly) NSString *goodsUrl __attribute__((swift_name("goodsUrl")));
@property (readonly) int32_t salePrice __attribute__((swift_name("salePrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceAssetGoods.Companion")))
@interface BrixHubServiceAssetGoodsCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubServiceAssetGoodsCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSource_")))
@interface BrixHubSoundSource_ : BrixHubBase
- (instancetype)initWithSoundSourceID:(int32_t)soundSourceID soundSourceType:(NSString *)soundSourceType soundSourceName:(NSString *)soundSourceName __attribute__((swift_name("init(soundSourceID:soundSourceType:soundSourceName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubSoundSource_Companion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubSoundSource_ *)doCopySoundSourceID:(int32_t)soundSourceID soundSourceType:(NSString *)soundSourceType soundSourceName:(NSString *)soundSourceName __attribute__((swift_name("doCopy(soundSourceID:soundSourceType:soundSourceName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t soundSourceID __attribute__((swift_name("soundSourceID")));
@property (readonly) NSString *soundSourceName __attribute__((swift_name("soundSourceName")));
@property (readonly) NSString *soundSourceType __attribute__((swift_name("soundSourceType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSource_.Companion")))
@interface BrixHubSoundSource_Companion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubSoundSource_Companion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSourceData_")))
@interface BrixHubSoundSourceData_ : BrixHubBase
- (instancetype)initWithFilePath:(NSString *)filePath duration:(int64_t)duration __attribute__((swift_name("init(filePath:duration:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubSoundSourceData_Companion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubSoundSourceData_ *)doCopyFilePath:(NSString *)filePath duration:(int64_t)duration __attribute__((swift_name("doCopy(filePath:duration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t duration __attribute__((swift_name("duration")));
@property (readonly) NSString *filePath __attribute__((swift_name("filePath")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSourceData_.Companion")))
@interface BrixHubSoundSourceData_Companion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubSoundSourceData_Companion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Template_")))
@interface BrixHubTemplate_ : BrixHubBase
- (instancetype)initWithTemplateID:(int32_t)templateID templateName:(NSString *)templateName thumbnail:(NSString *)thumbnail __attribute__((swift_name("init(templateID:templateName:thumbnail:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubTemplate_Companion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubTemplate_ *)doCopyTemplateID:(int32_t)templateID templateName:(NSString *)templateName thumbnail:(NSString *)thumbnail __attribute__((swift_name("doCopy(templateID:templateName:thumbnail:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t templateID __attribute__((swift_name("templateID")));
@property (readonly) NSString *templateName __attribute__((swift_name("templateName")));
@property (readonly) NSString *thumbnail __attribute__((swift_name("thumbnail")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Template_.Companion")))
@interface BrixHubTemplate_Companion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubTemplate_Companion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateData")))
@interface BrixHubTemplateData : BrixHubBase
- (instancetype)initWithTextItem:(NSArray<BrixHubTemplateDataTextItem *> *)textItem imgItem:(NSArray<BrixHubTemplateDataImageItem *> *)imgItem __attribute__((swift_name("init(textItem:imgItem:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubTemplateDataCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<BrixHubTemplateDataTextItem *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<BrixHubTemplateDataImageItem *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubTemplateData *)doCopyTextItem:(NSArray<BrixHubTemplateDataTextItem *> *)textItem imgItem:(NSArray<BrixHubTemplateDataImageItem *> *)imgItem __attribute__((swift_name("doCopy(textItem:imgItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BrixHubTemplateDataImageItem *> *imgItem __attribute__((swift_name("imgItem")));
@property (readonly) NSArray<BrixHubTemplateDataTextItem *> *textItem __attribute__((swift_name("textItem")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateData.Companion")))
@interface BrixHubTemplateDataCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubTemplateDataCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateData.ImageItem")))
@interface BrixHubTemplateDataImageItem : BrixHubBase
- (instancetype)initWithType:(NSString *)type url:(NSString *)url width:(float)width ratio:(float)ratio top:(float)top left:(float)left __attribute__((swift_name("init(type:url:width:ratio:top:left:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubTemplateDataImageItemCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubTemplateDataImageItem *)doCopyType:(NSString *)type url:(NSString *)url width:(float)width ratio:(float)ratio top:(float)top left:(float)left __attribute__((swift_name("doCopy(type:url:width:ratio:top:left:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) float ratio __attribute__((swift_name("ratio")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateData.ImageItemCompanion")))
@interface BrixHubTemplateDataImageItemCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubTemplateDataImageItemCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateData.TextItem")))
@interface BrixHubTemplateDataTextItem : BrixHubBase
- (instancetype)initWithTypeface:(NSString *)typeface placeholder:(NSString *)placeholder size:(float)size color:(NSString *)color align:(NSString *)align width:(float)width top:(float)top left:(float)left __attribute__((swift_name("init(typeface:placeholder:size:color:align:width:top:left:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubTemplateDataTextItemCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubTemplateDataTextItem *)doCopyTypeface:(NSString *)typeface placeholder:(NSString *)placeholder size:(float)size color:(NSString *)color align:(NSString *)align width:(float)width top:(float)top left:(float)left __attribute__((swift_name("doCopy(typeface:placeholder:size:color:align:width:top:left:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *align __attribute__((swift_name("align")));
@property (readonly) NSString *color __attribute__((swift_name("color")));
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) NSString *placeholder __attribute__((swift_name("placeholder")));
@property (readonly) float size __attribute__((swift_name("size")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) NSString *typeface __attribute__((swift_name("typeface")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateData.TextItemCompanion")))
@interface BrixHubTemplateDataTextItemCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubTemplateDataTextItemCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadVod")))
@interface BrixHubUploadVod : BrixHubBase
- (instancetype)initWithUploadFileName:(NSString *)uploadFileName saveFileName:(NSString *)saveFileName fileUrl:(NSString *)fileUrl __attribute__((swift_name("init(uploadFileName:saveFileName:fileUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubUploadVodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubUploadVod *)doCopyUploadFileName:(NSString *)uploadFileName saveFileName:(NSString *)saveFileName fileUrl:(NSString *)fileUrl __attribute__((swift_name("doCopy(uploadFileName:saveFileName:fileUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fileUrl __attribute__((swift_name("fileUrl")));
@property (readonly) NSString *saveFileName __attribute__((swift_name("saveFileName")));
@property (readonly) NSString *uploadFileName __attribute__((swift_name("uploadFileName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadVod.Companion")))
@interface BrixHubUploadVodCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubUploadVodCompanion *shared __attribute__((swift_name("shared")));
- (id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExtensionsKt")))
@interface BrixHubCoroutineExtensionsKt : BrixHubBase
+ (void)execute:(id<BrixHubKotlinx_coroutines_coreCoroutineScope>)receiver block:(id<BrixHubKotlinSuspendFunction0>)block __attribute__((swift_name("execute(_:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSDataExtensionsKt")))
@interface BrixHubNSDataExtensionsKt : BrixHubBase
+ (BrixHubKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol BrixHubRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol BrixHubRuntimeTransactionWithoutReturn <BrixHubRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<BrixHubRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol BrixHubRuntimeTransactionWithReturn <BrixHubRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<BrixHubRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol BrixHubRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol BrixHubRuntimeSqlDriver <BrixHubRuntimeCloseable>
@required
- (BrixHubRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(BrixHubInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<BrixHubRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<BrixHubRuntimeSqlCursor>)executeQueryIdentifier:(BrixHubInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<BrixHubRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (BrixHubRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol BrixHubRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<BrixHubRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<BrixHubRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("RuntimeQuery")))
@interface BrixHubRuntimeQuery<__covariant RowType> : BrixHubBase
- (instancetype)initWithQueries:(NSMutableArray<BrixHubRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<BrixHubRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<BrixHubRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<BrixHubRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<BrixHubRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<BrixHubRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface BrixHubKotlinThrowable : BrixHubBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (BrixHubKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BrixHubKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface BrixHubKotlinException : BrixHubKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface BrixHubKotlinRuntimeException : BrixHubKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface BrixHubKotlinIllegalStateException : BrixHubKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface BrixHubKotlinCancellationException : BrixHubKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface BrixHubKotlinByteArray : BrixHubBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(BrixHubByte *(^)(BrixHubInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (BrixHubKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol BrixHubKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<BrixHubKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol BrixHubKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface BrixHubKtor_client_coreHttpClient : BrixHubBase <BrixHubKotlinx_coroutines_coreCoroutineScope, BrixHubKtor_ioCloseable>
- (instancetype)initWithEngine:(id<BrixHubKtor_client_coreHttpClientEngine>)engine userConfig:(BrixHubKtor_client_coreHttpClientConfig<BrixHubKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (BrixHubKtor_client_coreHttpClient *)configBlock:(void (^)(BrixHubKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<BrixHubKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BrixHubKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<BrixHubKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<BrixHubKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) BrixHubKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) BrixHubKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) BrixHubKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) BrixHubKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) BrixHubKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) BrixHubKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface BrixHubKotlinEnumCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface BrixHubKotlinArray<T> : BrixHubBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(BrixHubInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<BrixHubKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol BrixHubKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<BrixHubKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<BrixHubKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol BrixHubKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<BrixHubKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<BrixHubKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol BrixHubKotlinx_serialization_coreKSerializer <BrixHubKotlinx_serialization_coreSerializationStrategy, BrixHubKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinFunction")))
@protocol BrixHubKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol BrixHubKotlinSuspendFunction0 <BrixHubKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface BrixHubRuntimeTransacterTransaction : BrixHubBase <BrixHubRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) BrixHubRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol BrixHubRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(BrixHubKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(BrixHubDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(BrixHubLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol BrixHubRuntimeSqlCursor <BrixHubRuntimeCloseable>
@required
- (BrixHubKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (BrixHubDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (BrixHubLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("RuntimeQueryListener")))
@protocol BrixHubRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol BrixHubKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface BrixHubKotlinByteIterator : BrixHubBase <BrixHubKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BrixHubByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol BrixHubKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<BrixHubKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<BrixHubKotlinCoroutineContextElement> _Nullable)getKey:(id<BrixHubKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<BrixHubKotlinCoroutineContext>)minusKeyKey:(id<BrixHubKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<BrixHubKotlinCoroutineContext>)plusContext:(id<BrixHubKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol BrixHubKtor_client_coreHttpClientEngine <BrixHubKotlinx_coroutines_coreCoroutineScope, BrixHubKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(BrixHubKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(BrixHubKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(BrixHubKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) BrixHubKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) BrixHubKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<BrixHubKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface BrixHubKtor_client_coreHttpClientEngineConfig : BrixHubBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property BrixHubKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface BrixHubKtor_client_coreHttpClientConfig<T> : BrixHubBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BrixHubKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(BrixHubKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<BrixHubKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(BrixHubKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(BrixHubKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol BrixHubKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol BrixHubKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(BrixHubKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(BrixHubKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(BrixHubKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(BrixHubKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(BrixHubKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(BrixHubKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(BrixHubKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(BrixHubKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<BrixHubKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface BrixHubKtor_eventsEvents : BrixHubBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(BrixHubKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<BrixHubKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(BrixHubKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(BrixHubKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface BrixHubKtor_utilsPipeline<TSubject, TContext> : BrixHubBase
- (instancetype)initWithPhase:(BrixHubKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BrixHubKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BrixHubKotlinArray<BrixHubKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(BrixHubKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(BrixHubKtor_utilsPipelinePhase *)reference phase:(BrixHubKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(BrixHubKtor_utilsPipelinePhase *)reference phase:(BrixHubKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(BrixHubKtor_utilsPipelinePhase *)phase block:(id<BrixHubKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<BrixHubKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(BrixHubKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(BrixHubKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(BrixHubKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(BrixHubKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<BrixHubKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<BrixHubKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface BrixHubKtor_client_coreHttpReceivePipeline : BrixHubKtor_utilsPipeline<BrixHubKtor_client_coreHttpResponse *, BrixHubKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(BrixHubKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BrixHubKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(BrixHubKotlinArray<BrixHubKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface BrixHubKtor_client_coreHttpRequestPipeline : BrixHubKtor_utilsPipeline<id, BrixHubKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(BrixHubKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BrixHubKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(BrixHubKotlinArray<BrixHubKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface BrixHubKtor_client_coreHttpResponsePipeline : BrixHubKtor_utilsPipeline<BrixHubKtor_client_coreHttpResponseContainer *, BrixHubKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(BrixHubKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BrixHubKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(BrixHubKotlinArray<BrixHubKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface BrixHubKtor_client_coreHttpSendPipeline : BrixHubKtor_utilsPipeline<id, BrixHubKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(BrixHubKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BrixHubKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(BrixHubKotlinArray<BrixHubKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol BrixHubKotlinx_serialization_coreEncoder
@required
- (id<BrixHubKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<BrixHubKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BrixHubKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<BrixHubKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<BrixHubKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) BrixHubKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol BrixHubKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<BrixHubKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BrixHubKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<BrixHubKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BrixHubKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol BrixHubKotlinx_serialization_coreDecoder
@required
- (id<BrixHubKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BrixHubKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BrixHubKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<BrixHubKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<BrixHubKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) BrixHubKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol BrixHubKotlinCoroutineContextElement <BrixHubKotlinCoroutineContext>
@required
@property (readonly) id<BrixHubKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol BrixHubKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface BrixHubKtor_client_coreHttpRequestData : BrixHubBase
- (instancetype)initWithUrl:(BrixHubKtor_httpUrl *)url method:(BrixHubKtor_httpHttpMethod *)method headers:(id<BrixHubKtor_httpHeaders>)headers body:(BrixHubKtor_httpOutgoingContent *)body executionContext:(id<BrixHubKotlinx_coroutines_coreJob>)executionContext attributes:(id<BrixHubKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<BrixHubKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BrixHubKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BrixHubKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<BrixHubKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<BrixHubKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BrixHubKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) BrixHubKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface BrixHubKtor_client_coreHttpResponseData : BrixHubBase
- (instancetype)initWithStatusCode:(BrixHubKtor_httpHttpStatusCode *)statusCode requestTime:(BrixHubKtor_utilsGMTDate *)requestTime headers:(id<BrixHubKtor_httpHeaders>)headers version:(BrixHubKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<BrixHubKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<BrixHubKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<BrixHubKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BrixHubKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) BrixHubKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) BrixHubKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface BrixHubKotlinAbstractCoroutineContextElement : BrixHubBase <BrixHubKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<BrixHubKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<BrixHubKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol BrixHubKotlinContinuationInterceptor <BrixHubKotlinCoroutineContextElement>
@required
- (id<BrixHubKotlinContinuation>)interceptContinuationContinuation:(id<BrixHubKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<BrixHubKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface BrixHubKotlinx_coroutines_coreCoroutineDispatcher : BrixHubKotlinAbstractCoroutineContextElement <BrixHubKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<BrixHubKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<BrixHubKotlinCoroutineContext>)context block:(id<BrixHubKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<BrixHubKotlinCoroutineContext>)context block:(id<BrixHubKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<BrixHubKotlinContinuation>)interceptContinuationContinuation:(id<BrixHubKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<BrixHubKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (BrixHubKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (BrixHubKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(BrixHubKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<BrixHubKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface BrixHubKtor_client_coreProxyConfig : BrixHubBase
- (instancetype)initWithUrl:(BrixHubKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BrixHubKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol BrixHubKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(BrixHubKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) BrixHubKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface BrixHubKtor_utilsAttributeKey<T> : BrixHubBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface BrixHubKtor_eventsEventDefinition<T> : BrixHubBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol BrixHubKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface BrixHubKtor_utilsPipelinePhase : BrixHubBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol BrixHubKotlinSuspendFunction2 <BrixHubKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface BrixHubKtor_client_coreHttpReceivePipelinePhases : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol BrixHubKtor_httpHttpMessage
@required
@property (readonly) id<BrixHubKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface BrixHubKtor_client_coreHttpResponse : BrixHubBase <BrixHubKtor_httpHttpMessage, BrixHubKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BrixHubKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<BrixHubKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) BrixHubKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) BrixHubKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) BrixHubKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface BrixHubKotlinUnit : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface BrixHubKtor_client_coreHttpRequestPipelinePhases : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol BrixHubKtor_httpHttpMessageBuilder
@required
@property (readonly) BrixHubKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface BrixHubKtor_client_coreHttpRequestBuilder : BrixHubBase <BrixHubKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BrixHubKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (BrixHubKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<BrixHubKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<BrixHubKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<BrixHubKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (BrixHubKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(BrixHubKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (BrixHubKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(BrixHubKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(BrixHubKtor_httpURLBuilder *, BrixHubKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<BrixHubKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property BrixHubKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<BrixHubKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) BrixHubKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property BrixHubKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) BrixHubKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface BrixHubKtor_client_coreHttpResponsePipelinePhases : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface BrixHubKtor_client_coreHttpResponseContainer : BrixHubBase
- (instancetype)initWithExpectedType:(BrixHubKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (BrixHubKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(BrixHubKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BrixHubKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface BrixHubKtor_client_coreHttpClientCall : BrixHubBase <BrixHubKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(BrixHubKtor_client_coreHttpClient *)client requestData:(BrixHubKtor_client_coreHttpRequestData *)requestData responseData:(BrixHubKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(BrixHubKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(BrixHubKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(BrixHubKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<BrixHubKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<BrixHubKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BrixHubKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<BrixHubKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<BrixHubKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property BrixHubKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface BrixHubKtor_client_coreHttpSendPipelinePhases : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) BrixHubKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol BrixHubKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BrixHubKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BrixHubKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BrixHubKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) BrixHubKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface BrixHubKotlinx_serialization_coreSerializersModule : BrixHubBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<BrixHubKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BrixHubKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<BrixHubKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<BrixHubKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BrixHubKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BrixHubKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BrixHubKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BrixHubKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol BrixHubKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface BrixHubKotlinx_serialization_coreSerialKind : BrixHubBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol BrixHubKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BrixHubKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BrixHubKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BrixHubKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<BrixHubKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) BrixHubKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface BrixHubKotlinNothing : BrixHubBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface BrixHubKtor_httpUrl : BrixHubBase
@property (class, readonly, getter=companion) BrixHubKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<BrixHubKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) BrixHubKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface BrixHubKtor_httpHttpMethod : BrixHubBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol BrixHubKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BrixHubKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol BrixHubKtor_httpHeaders <BrixHubKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface BrixHubKtor_httpOutgoingContent : BrixHubBase
- (id _Nullable)getPropertyKey:(BrixHubKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(BrixHubKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<BrixHubKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) BrixHubLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) BrixHubKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<BrixHubKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BrixHubKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol BrixHubKotlinx_coroutines_coreJob <BrixHubKotlinCoroutineContextElement>
@required
- (id<BrixHubKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<BrixHubKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(BrixHubKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BrixHubKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<BrixHubKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(BrixHubKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<BrixHubKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(BrixHubKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<BrixHubKotlinx_coroutines_coreJob>)plusOther_:(id<BrixHubKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<BrixHubKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<BrixHubKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface BrixHubKtor_httpHttpStatusCode : BrixHubBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (BrixHubKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface BrixHubKtor_utilsGMTDate : BrixHubBase <BrixHubKotlinComparable>
@property (class, readonly, getter=companion) BrixHubKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(BrixHubKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKtor_utilsMonth *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(BrixHubKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(BrixHubKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) BrixHubKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) BrixHubKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface BrixHubKtor_httpHttpProtocolVersion : BrixHubBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol BrixHubKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<BrixHubKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface BrixHubKotlinAbstractCoroutineContextKey<B, E> : BrixHubBase <BrixHubKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<BrixHubKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<BrixHubKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface BrixHubKotlinx_coroutines_coreCoroutineDispatcherKey : BrixHubKotlinAbstractCoroutineContextKey<id<BrixHubKotlinContinuationInterceptor>, BrixHubKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<BrixHubKotlinCoroutineContextKey>)baseKey safeCast:(id<BrixHubKotlinCoroutineContextElement> _Nullable (^)(id<BrixHubKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol BrixHubKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol BrixHubKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(BrixHubKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(BrixHubLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(BrixHubKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(BrixHubLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(BrixHubKtor_ioChunkBuffer *)dst completionHandler:(void (^)(BrixHubInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(BrixHubKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(BrixHubInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(BrixHubKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(BrixHubInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(BrixHubInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(BrixHubBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(BrixHubByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(BrixHubDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(BrixHubFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(BrixHubKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(BrixHubKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(BrixHubInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(BrixHubLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(BrixHubKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(BrixHubKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<BrixHubKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(BrixHubShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<BrixHubKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<BrixHubKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(BrixHubBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) BrixHubKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol BrixHubKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<BrixHubKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<BrixHubKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<BrixHubKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BrixHubKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface BrixHubKtor_utilsStringValuesBuilderImpl : BrixHubBase <BrixHubKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<BrixHubKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<BrixHubKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<BrixHubKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BrixHubKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) BrixHubMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface BrixHubKtor_httpHeadersBuilder : BrixHubKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<BrixHubKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface BrixHubKtor_client_coreHttpRequestBuilderCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface BrixHubKtor_httpURLBuilder : BrixHubBase
- (instancetype)initWithProtocol:(BrixHubKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<BrixHubKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (BrixHubKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<BrixHubKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<BrixHubKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property BrixHubKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface BrixHubKtor_utilsTypeInfo : BrixHubBase
- (instancetype)initWithType:(id<BrixHubKotlinKClass>)type reifiedType:(id<BrixHubKotlinKType>)reifiedType kotlinType:(id<BrixHubKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<BrixHubKotlinKClass>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<BrixHubKotlinKType>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<BrixHubKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKtor_utilsTypeInfo *)doCopyType:(id<BrixHubKotlinKClass>)type reifiedType:(id<BrixHubKotlinKType>)reifiedType kotlinType:(id<BrixHubKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BrixHubKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<BrixHubKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<BrixHubKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface BrixHubKtor_client_coreHttpClientCallCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BrixHubKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol BrixHubKtor_client_coreHttpRequest <BrixHubKtor_httpHttpMessage, BrixHubKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<BrixHubKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BrixHubKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) BrixHubKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) BrixHubKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) BrixHubKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol BrixHubKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<BrixHubKotlinKClass>)kClass provider:(id<BrixHubKotlinx_serialization_coreKSerializer> (^)(NSArray<id<BrixHubKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<BrixHubKotlinKClass>)kClass serializer:(id<BrixHubKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<BrixHubKotlinKClass>)baseClass actualClass:(id<BrixHubKotlinKClass>)actualClass actualSerializer:(id<BrixHubKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<BrixHubKotlinKClass>)baseClass defaultDeserializerProvider:(id<BrixHubKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<BrixHubKotlinKClass>)baseClass defaultDeserializerProvider:(id<BrixHubKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<BrixHubKotlinKClass>)baseClass defaultSerializerProvider:(id<BrixHubKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol BrixHubKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol BrixHubKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol BrixHubKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol BrixHubKotlinKClass <BrixHubKotlinKDeclarationContainer, BrixHubKotlinKAnnotatedElement, BrixHubKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface BrixHubKtor_httpUrlCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol BrixHubKtor_httpParameters <BrixHubKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface BrixHubKtor_httpURLProtocol : BrixHubBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface BrixHubKtor_httpHttpMethodCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (BrixHubKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<BrixHubKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) BrixHubKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) BrixHubKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) BrixHubKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) BrixHubKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) BrixHubKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) BrixHubKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) BrixHubKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol BrixHubKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface BrixHubKtor_httpHeaderValueWithParameters : BrixHubBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<BrixHubKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<BrixHubKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface BrixHubKtor_httpContentType : BrixHubKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<BrixHubKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<BrixHubKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(BrixHubKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (BrixHubKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (BrixHubKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol BrixHubKotlinx_coroutines_coreChildHandle <BrixHubKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(BrixHubKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<BrixHubKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol BrixHubKotlinx_coroutines_coreChildJob <BrixHubKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<BrixHubKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol BrixHubKotlinSequence
@required
- (id<BrixHubKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol BrixHubKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<BrixHubKotlinx_coroutines_coreSelectInstance>)select block:(id<BrixHubKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface BrixHubKtor_httpHttpStatusCodeCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (BrixHubKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) BrixHubKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<BrixHubKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface BrixHubKtor_utilsGMTDateCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BrixHubKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface BrixHubKtor_utilsWeekDay : BrixHubKotlinEnum<BrixHubKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BrixHubKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) BrixHubKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) BrixHubKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) BrixHubKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) BrixHubKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) BrixHubKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) BrixHubKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (BrixHubKotlinArray<BrixHubKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface BrixHubKtor_utilsMonth : BrixHubKotlinEnum<BrixHubKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BrixHubKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) BrixHubKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) BrixHubKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) BrixHubKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) BrixHubKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) BrixHubKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) BrixHubKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) BrixHubKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) BrixHubKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) BrixHubKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) BrixHubKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) BrixHubKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (BrixHubKotlinArray<BrixHubKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface BrixHubKtor_httpHttpProtocolVersionCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (BrixHubKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (BrixHubKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) BrixHubKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) BrixHubKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) BrixHubKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) BrixHubKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) BrixHubKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface BrixHubKtor_ioMemory : BrixHubBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(BrixHubKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(BrixHubKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (BrixHubKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (BrixHubKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface BrixHubKtor_ioBuffer : BrixHubBase
- (instancetype)initWithMemory:(BrixHubKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (BrixHubKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(BrixHubKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) BrixHubKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface BrixHubKtor_ioChunkBuffer : BrixHubKtor_ioBuffer
- (instancetype)initWithMemory:(BrixHubKtor_ioMemory *)memory origin:(BrixHubKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<BrixHubKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(BrixHubKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (BrixHubKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (BrixHubKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<BrixHubKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) BrixHubKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) BrixHubKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface BrixHubKtor_ioInput : BrixHubBase <BrixHubKtor_ioCloseable>
- (instancetype)initWithHead:(BrixHubKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<BrixHubKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BrixHubKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(BrixHubKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(BrixHubKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(BrixHubKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<BrixHubKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<BrixHubKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<BrixHubKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface BrixHubKtor_ioByteReadPacket : BrixHubKtor_ioInput
- (instancetype)initWithHead:(BrixHubKtor_ioChunkBuffer *)head pool:(id<BrixHubKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(BrixHubKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<BrixHubKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BrixHubKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (BrixHubKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BrixHubKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(BrixHubKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol BrixHubKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (BrixHubKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol BrixHubKotlinSuspendFunction1 <BrixHubKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol BrixHubKotlinAppendable
@required
- (id<BrixHubKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<BrixHubKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<BrixHubKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface BrixHubKtor_httpURLBuilderCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol BrixHubKtor_httpParametersBuilder <BrixHubKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol BrixHubKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<BrixHubKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<BrixHubKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface BrixHubKtor_httpURLProtocolCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (BrixHubKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) BrixHubKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) BrixHubKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) BrixHubKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) BrixHubKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) BrixHubKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, BrixHubKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface BrixHubKtor_httpHeaderValueParam : BrixHubBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface BrixHubKtor_httpHeaderValueWithParametersCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<BrixHubKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface BrixHubKtor_httpContentTypeCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (BrixHubKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) BrixHubKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol BrixHubKotlinx_coroutines_coreParentJob <BrixHubKotlinx_coroutines_coreJob>
@required
- (BrixHubKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol BrixHubKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<BrixHubKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(BrixHubKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(BrixHubKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<BrixHubKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface BrixHubKtor_utilsWeekDayCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (BrixHubKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (BrixHubKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface BrixHubKtor_utilsMonthCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (BrixHubKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (BrixHubKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface BrixHubKtor_ioMemoryCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BrixHubKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface BrixHubKtor_ioBufferCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BrixHubKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol BrixHubKtor_ioObjectPool <BrixHubKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface BrixHubKtor_ioChunkBufferCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BrixHubKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<BrixHubKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<BrixHubKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface BrixHubKtor_ioInputCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface BrixHubKtor_ioByteReadPacketCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BrixHubKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface BrixHubKotlinKTypeProjection : BrixHubBase
- (instancetype)initWithVariance:(BrixHubKotlinKVariance * _Nullable)variance type:(id<BrixHubKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrixHubKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (BrixHubKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<BrixHubKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BrixHubKotlinKTypeProjection *)doCopyVariance:(BrixHubKotlinKVariance * _Nullable)variance type:(id<BrixHubKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BrixHubKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) BrixHubKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface BrixHubKotlinx_coroutines_coreAtomicDesc : BrixHubBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(BrixHubKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(BrixHubKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property BrixHubKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface BrixHubKotlinx_coroutines_coreOpDescriptor : BrixHubBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(BrixHubKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BrixHubKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : BrixHubKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) BrixHubKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface BrixHubKotlinKVariance : BrixHubKotlinEnum<BrixHubKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BrixHubKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) BrixHubKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) BrixHubKotlinKVariance *out __attribute__((swift_name("out")));
+ (BrixHubKotlinArray<BrixHubKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface BrixHubKotlinKTypeProjectionCompanion : BrixHubBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrixHubKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BrixHubKotlinKTypeProjection *)contravariantType:(id<BrixHubKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BrixHubKotlinKTypeProjection *)covariantType:(id<BrixHubKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BrixHubKotlinKTypeProjection *)invariantType:(id<BrixHubKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) BrixHubKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface BrixHubKotlinx_coroutines_coreAtomicOp<__contravariant T> : BrixHubKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) BrixHubKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode : BrixHubBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(BrixHubBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(BrixHubBoolean *(^)(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(BrixHubBoolean *(^)(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(BrixHubBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(BrixHubBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next__) id next __attribute__((swift_name("next")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : BrixHubKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(BrixHubKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(BrixHubKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(BrixHubKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(BrixHubKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(BrixHubKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) BrixHubKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
