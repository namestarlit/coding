export default function Place(place) {
  return (
    <>
      <div className='container--place'>
        <div className='container--img'>
          <img className='place--img' src={place.imageUrl} alt={place.title} />
        </div>
        <div className='place--desc'>
          <p>
            <i className="fa-solid fa-location-dot"></i>&nbsp;&nbsp;
            <span className="desc--location">{place.location}</span>&nbsp;&nbsp;
            <a className='desc--url' href={place.googleMapsUrl} target='_blank'>View on Google Maps</a>
          </p>
          <h2>{place.title}</h2>
          <p className='desc--date'>{`${place.startDate} - ${place.endDate}`}</p>
          <p>{place.description}</p>
        </div>
      </div>
    </>
  )
}
