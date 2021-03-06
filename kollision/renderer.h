/*
  Copyright (c) 2007 Paolo Capriotti <p.capriotti@gmail.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.
*/

#ifndef RENDERER_H
#define RENDERER_H

#include <QHash>
#include <QSize>
#include <QPixmap>

#ifndef Q_OS_SYMBIAN
class KSvgRenderer;
#else
class QSvgRenderer;
#endif

class Renderer
{
    QHash<QString, QPixmap> m_cache;
    QSize m_size;

#ifndef Q_OS_SYMBIAN
    KSvgRenderer* m_renderer;
#else
    QSvgRenderer* m_renderer;
#endif
public:
    Renderer();
    ~Renderer();

    QPixmap render(const QString& id);
    void resize(const QSize& size);
    QSize size() const { return m_size; }
};

#endif // RENDERER_H
