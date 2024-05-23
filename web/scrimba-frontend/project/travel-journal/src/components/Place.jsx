export default function Place() {
  return (
    <>
      <div className='container--place'>
        <div className='container--img'>
          <img className='place--img' src='https://source.unsplash.com/WLxQvbMyfas' alt='Mount Fuji' />
        </div>
        <div className='place--desc'>
          <p>
            <i className="fa-solid fa-location-dot"></i>&nbsp;&nbsp;
            <span className="desc--location">Japan</span>&nbsp;&nbsp;
            <a className='desc--url' href='https://goo.gl/maps/1DGM5WrWnATgkSNB8' target='_blank'>View on Google Maps</a>
          </p>
          <h2>Mount Fuji</h2>
          <p className='desc--date'>12 Jan, 2021 - 24 Jan, 2021</p>
          <p>
            Mount Fuji is the tallest mountain in Japan, standing at 3,776 meters (12,380 feet). Mount Fuji is the single most popular tourist site in Japan, for both Japanese and foreign tourists.
          </p>
        </div>
      </div>
    </>
  )
}
