import { useState, useRef } from 'react';
import { flushSync } from 'react-dom';
import './App.css';

// A small yin-yang glyph used as the page's signature element.
// The theme transition grows outward from this glyph's center.
function YinYangGlyph({ variant }) {
  const isYang = variant === 'yang';
  return (
    <svg
      className="glyph"
      viewBox="0 0 100 100"
      width="72"
      height="72"
      aria-hidden="true"
    >
      <circle
        cx="50"
        cy="50"
        r="48"
        className={isYang ? 'glyph-bg-light' : 'glyph-bg-dark'}
      />
      <path
        d="M50,2 A48,48 0 0,1 50,98 A24,24 0 0,1 50,50 A24,24 0 0,0 50,2 Z"
        className={isYang ? 'glyph-fill-dark' : 'glyph-fill-light'}
      />
      <circle
        cx="50"
        cy="26"
        r="7"
        className={isYang ? 'glyph-fill-dark' : 'glyph-fill-light'}
      />
      <circle
        cx="50"
        cy="74"
        r="7"
        className={isYang ? 'glyph-fill-light' : 'glyph-fill-dark'}
      />
    </svg>
  );
}

// The Main Manager
export default function App() {
  const [isWhite, setIsWhite] = useState(true);
  const glyphRef = useRef(null);

  const togglePage = () => {
    // Fallback for browsers without View Transitions support
    if (!document.startViewTransition || !glyphRef.current) {
      setIsWhite(!isWhite);
      return;
    }

    // Anchor the reveal circle on the glyph's actual on-screen position
    const { left, top, width, height } = glyphRef.current.getBoundingClientRect();
    const x = left + width / 2;
    const y = top + height / 2;

    // Big enough radius to guarantee full coverage from that point
    const endRadius = Math.hypot(
      Math.max(x, window.innerWidth - x),
      Math.max(y, window.innerHeight - y)
    );

    const transition = document.startViewTransition(() => {
      flushSync(() => {
        setIsWhite(!isWhite);
      });
    });

    transition.ready.then(() => {
      document.documentElement.animate(
        {
          clipPath: [
            `circle(0px at ${x}px ${y}px)`,
            `circle(${endRadius}px at ${x}px ${y}px)`,
          ],
        },
        {
          duration: 600,
          easing: 'ease-in-out',
          pseudoElement: '::view-transition-new(root)',
        }
      );
    });
  };

  return (
    <div className={`page ${isWhite ? 'white-bg' : 'black-bg'}`}>
      <div className="content">
        <div className="glyph-anchor" ref={glyphRef}>
          <YinYangGlyph variant={isWhite ? 'yang' : 'yin'} />
        </div>
        <div className="text-container">
          <span className="eyebrow">
            {isWhite ? '阳 · Yang' : '阴 · Yin'}
          </span>
          <h1>
            {isWhite ? 'Light, Active, Ascending' : 'Dark, Still, Receiving'}
          </h1>
          <p className="lede">
            {isWhite
              ? 'Yang is the sunlit slope of the mountain: motion, heat, and the push toward the world. It is the spark before the flame, the breath drawn in before the shout.'
              : 'Yin is the shaded slope: rest, depth, and the pull back toward the self. It is the pause between heartbeats, the quiet that gives the sound its shape.'}
          </p>
          <ul className="traits">
            {isWhite ? (
              <>
                <li>Bright</li>
                <li>Expansive</li>
                <li>Restless</li>
              </>
            ) : (
              <>
                <li>Cool</li>
                <li>Hollow</li>
                <li>Patient</li>
              </>
            )}
          </ul>
          <button onClick={togglePage}>
            {isWhite ? 'Yin' : 'Yang'} <span className="arrow">→</span>
          </button>
        </div>
      </div>
    </div>
  );
}