import Hero from './components/Hero'
import Content from './components/Content'
import cover from './assets/cover.png'

export default function App() {
	return (
		<>
			<div className='container'>
				<img className='cover--img' src={cover} alt='A photo of namestarlit' />

				<div className='container--main'>
					<main>
						<Hero />
						<Content />
					</main>
				</div>
				<div className='container--social'>
					<a href="https::/twitter.com/namestarlit"><i className="fa-brands fa-square-x-twitter fa-2xl"></i></a>
					<a href='#'><i className="fa-brands fa-square-facebook fa-2xl"></i></a>
					<a href='#'><i className="fa-brands fa-square-instagram fa-2xl"></i></a>
					<a href="https://github.com/namestarlit"><i className="fa-brands fa-square-github fa-2xl"></i></a>

				</div>
			</div>
		</>
	)
}
