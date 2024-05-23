import logo from '../assets/world.png'

export default function Navbar() {
  return (
    <nav>
      <img className='nav--logo' src={logo} alt="The world icon" />
      <h1>my travel journal.</h1>
    </nav>
  )
}
