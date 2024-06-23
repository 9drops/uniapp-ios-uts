<template>
	<view class="content">
		<image class="logo" src="/static/logo.png"></image>
		<view class="text-area">
			<button @click="initData">初始化</button>
			<button @click="getFileData">解码</button>
			<button @click="change">测试</button>
			<button @click="goPage">跳转到腾讯地图</button>
		</view>
	</view>
</template>

<script>
	import {
			uts_opus2wav
		} from '@/uni_modules/opus-decoder';
	

	export default {
		data() {
			return {
				title: 'Hello'
			}
		},
		onLoad() {
			// getFileData()
		},
		methods: {
			initData() {
				console.log(12121)
			},
			getFileData() {
				// let _this = this
				let a = plus.io.convertLocalFileSystemURL('/static/opustest.opus')
				let b = a + ".wav"
				let ret = uts_opus2wav(a,b)
				console.log("ret:" + ret + " opus:" + a + " wav:" + b)
				
				// plus.io.requestFileSystem(plus.io.PRIVATE_DOC, (fs) => {
				// 	fs.root.getFile('test4.wav', {
				// 		'create': true
				// 	}, (entry) => {
				// 		b = entry.fullPath
				// 		console.log(decoder)
				// 		let ret = uts_opus2wav(decoder,a,b)
				// 		console.log('uts_opus2wav:' + ret)
				// 		uts_destoryDecoder(decoder)
				// 	}, (err) => {
				// 		console.log(err)
				// 	})
				// }, (err) => {
				// 	console.log(err)
				// })
			},
			change() {
				// test()
			},
			goPage(){
				console.warn('goPage 日志')
				uni.navigateTo({
					url:'/pages/TencentLocation/TencentLocation'
				})
			}
		}
	}
</script>

<style>
	.content {
		display: flex;
		flex-direction: column;
		align-items: center;
		justify-content: center;
	}

	.logo {
		height: 200rpx;
		width: 200rpx;
		margin-top: 200rpx;
		margin-left: auto;
		margin-right: auto;
		margin-bottom: 50rpx;
	}

	.text-area {
		display: flex;
		justify-content: center;
	}

	.title {
		font-size: 36rpx;
		color: #8f8f94;
	}
</style>