import Navbar from './components/Navbar'
import Place from './components/Place'


export default function App() {
  return (
    <div className='container'>
      <header>
        <Navbar />
      </header>
      <main>
        <section className="section--travel">
          <Place />
        </section>
      </main>
    </div>
  )
}

