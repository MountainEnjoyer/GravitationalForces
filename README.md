<!-- Improved compatibility of back to top link: See: https://github.com/othneildrew/Best-README-Template/pull/73 -->
<a id="readme-top"></a>
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Don't forget to give the project a star!
*** Thanks again! Now go create something AMAZING! :D
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![Unlicense License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

<!-- PROJECT LOGO -->
<br />
<div align="center">

  <h3 align="center">Gravitational Forces Simulation</h3>

  <p align="center">
    A simulation of Gravitational Forces applied on flying object using Raylib.
    <br />
    <a href="https://github.com/MountainEnjoyer/GravitationalForces"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/MountainEnjoyer/GravitationalForces/issues/new?labels=bug&template=bug-report---.md">Report Bug</a>
    &middot;
    <a href="https://github.com/MountainEnjoyer/GravitationalForces/issues/new?labels=enhancement&template=feature-request---.md">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

https://github.com/user-attachments/assets/bfdc378c-96ef-426d-ae1c-a3c07be4d3f1

INTRO

<p align="right"><a href="#readme-top">back to top</a></p>



### Built With
C as the programming language, Raylib as the graphical library and gcc as the compuker.
* [![C][C]][C-url] 
* [![Raylib][Raylib]][Raylib-url] 
* [![gcc][Gcc]][Gcc-url]

<p align="right"><a href="#readme-top">back to top</a></p>



<!-- GETTING STARTED -->
## Getting Started

This is an example of how you may give instructions on setting up your project locally.
To get a local copy up and running follow these simple example steps.

### Prerequisites

This is an example of how to list things you need to use the software and how to install them.
* on Arch Linux :
  Gcc and make are already installed.
* on Ubuntu :
  Verify that gcc and make are installed:
  ```sh
  sudo apt install build-essential git
  ```

### Installation

_Below is an example of how you can instruct your audience on installing and setting up your app. This template doesn't rely on any external dependencies or services._

1. Clone the repo
   ```sh
   git clone https://github.com/MountainEnjoyer/GravitationalForces.git
   ```
2. Install Raylib

  - On Arch linux:
    ```sh
    sudo pacman -S raylib
    ```
  - On Ubuntu:
    ```sh
    sudo apt install raylib
    ```
3. Change the values of the simulation:
   ```C
    #define WIDTH 1200
    #define HEIGHT 900
    #define FPS 60
    #define OBJ 100
    #define R_OBJ 2
    #define MASS_OBJ 10
    #define XSPEED_OBJ 10
    #define YSPEED_OBJ 0
    #define BODY 2
    #define MASS1 100
    #define MASS2 500
    #define G 0.6 // supposed to be 6.67*powf(10,-11);
    #define L_TRAIL 250
   ```
4. Comile and execute by running:
   ```sh
    make
   ```
5. You can press ENTER to replay the simulation and ESC to exit it.

<p align="right"><a href="#readme-top">back to top</a></p>



<!-- USAGE EXAMPLES -->
## Usage

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.

_For more examples, please refer to the [Documentation](https://example.com)_

<p align="right"><a href="#readme-top">back to top</a></p>


<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

### Top contributors:

<a href="https://github.com/MountainEnjoyer/GravitationalForces/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=MountainEnjoyer/GravitationalForces" alt="contrib.rocks image" />
</a>

<p align="right"><a href="#readme-top">back to top</a></p>



<!-- LICENSE -->
## License

Distributed under the Unlicense License. See `LICENSE.txt` for more information.

<p align="right"><a href="#readme-top">back to top</a></p>



<!-- CONTACT -->
## Contact

Zakary CHAUVE - contact@zakary.xyz

Project Link: [https://github.com/MountainEnjoyer/GravitationalForces](https://github.com/MountainEnjoyer/GravitationalForces)

<p align="right"><a href="#readme-top">back to top</a></p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/MountainEnjoyer/GravitationalForces.svg?style=for-the-badge
[contributors-url]: https://github.com/MountainEnjoyer/GravitationalForces/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/MountainEnjoyer/GravitationalForces.svg?style=for-the-badge
[forks-url]: https://github.com/MountainEnjoyer/GravitationalForces/network/members
[stars-shield]: https://img.shields.io/github/stars/MountainEnjoyer/GravitationalForces.svg?style=for-the-badge
[stars-url]: https://github.com/MountainEnjoyer/GravitationalForces/stargazers
[issues-shield]: https://img.shields.io/github/issues/MountainEnjoyer/GravitationalForces.svg?style=for-the-badge
[issues-url]: https://github.com/MountainEnjoyer/GravitationalForces/issues
[license-shield]: https://img.shields.io/github/license/MountainEnjoyer/GravitationalForces.svg?style=for-the-badge
[license-url]: https://github.com/MountainEnjoyer/GravitationalForces/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/zchauve

[C]: https://img.shields.io/badge/C-545E6E?style=for-the-badge&logo=C&logoColor=black
[C-url]: https://www.c-language.org/
[Raylib]: https://img.shields.io/badge/Raylib-FFFFFF?style=for-the-badge&logo=raylib&logoColor=black
[Raylib-url]: https://www.raylib.com/
[Gcc]:  https://img.shields.io/badge/GCC-000000?style=for-the-badge&logo=rgcc&logoColor=white
[Gcc-Url]: https://gcc.gnu.org/
