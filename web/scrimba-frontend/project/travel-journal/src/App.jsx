import Navbar from './components/Navbar'
import Place from './components/Place'
import data from './data'

const places = data.map((place, index) => {
  return (
    <>
      <Place 
        key={place.id}
        {...place}
      />
      {index < data.length - 1 && <hr />}
    </>
  )
});

export default function App() {
  return (
    <div className='container'>
      <header>
        <Navbar />
      </header>
      <main>
        <section className="section--travel">
          {places}
        </section>
      </main>
    </div>
  )
}

