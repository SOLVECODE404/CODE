import React from "react";
import { ReactDOM } from "react";
import { Swiper, SwiperSlide } from "swiper/react";
import 'swiper/css';
import 'swiper/css/effect-coverflow';
import 'swiper/css/pagination';
import 'swiper/css/navigation';
import { EffectCoverflow, Pagination, Navigation } from "swiper/modules";
import slide_image1 from "../src/assets/images/im1.jpg";
import slide_image2 from "../src/assets/images/im2.jpg";
import slide_image3 from "../src/assets/images/im3.jpg";
import slide_image4 from "../src/assets/images/im4.jpg";
import slide_image5 from "../src/assets/images/im5.jpg";

function App() {
  return (
    <div className="container">
      <h1 className="heading">Image Gallery</h1>
      <Swiper
        effect={'coverflow'}
        grabCursor={true}
        centeredSlides={true}
        loop={true}
        slidesPerView={"auto"}
        coverflowEffect={{ rotate: 0, strecth: 0, depth: 100, modifier: 2.5 }}
        pagination={{el:'.swiper-pagination',clickable:true}}
        navigation={{nextEl:'.swiper-button-next',
          prevEl:'.swiper-button-prev',
          clickable:true,
        }}
        modules={[EffectCoverflow,Pagination,Navigation]}
        className="swiper_container"
      >
        <SwiperSlide>
          <img src={slide_image1} alt="slideim1" />
        </SwiperSlide>
        <SwiperSlide>
          <img src={slide_image2} alt="slideim2" />
        </SwiperSlide>
        <SwiperSlide>
          <img src={slide_image3} alt="slideim3" />
        </SwiperSlide>
        <SwiperSlide>
          <img src={slide_image4} alt="slideim4" />
        </SwiperSlide>
        <SwiperSlide>
          <img src={slide_image5} alt="slideim5" />
        </SwiperSlide>
        <div className="slider-controler">
          <div className="swiper-button-prev slider-arrow">
            <ion-icon name="arrow-back-outline"></ion-icon>
          </div>
          <div className="swiper-button-next slider-arrow">
            <ion-icon name="arrow-forward-outline"></ion-icon>
          </div>
          <div className="swiper-pagination"></div>
        </div>
      </Swiper>
    </div>
  );
} 
export default App;
