void MiniSpanTree_PRIM(MGraph G, VertexType u) {  // �㷨7.9
  // ������ķ�㷨�ӵ�u���������������G����С������T�����T�ĸ����ߡ�
  // ��¼�Ӷ��㼯U��V��U�Ĵ�����С�ıߵĸ������鶨�壺
  //  struct {
  //      VertexType  adjvex;
  //      VRType     lowcost;
  //  } closedge[MAX_VERTEX_NUM];
  int i,j,k;
  k = LocateVex ( G, u );
  for ( j=0; j<G.vexnum; ++j ) {     // ���������ʼ��
    if (j!=k) 
     { closedge[j].adjvex=u; closedge[j].lowcost=G.arcs[k][j].adj; }
  }
  closedge[k].lowcost = 0;      // ��ʼ��U��{u}
  for (i=1; i<G.vexnum; ++i) {  // ѡ������G.vexnum-1������
    k = minimum(closedge);      // ���T����һ����㣺��k����
      // ��ʱclosedge[k].lowcost =
      // MIN{ closedge[vi].lowcost | closedge[vi].lowcost>0, vi��V-U }
    printf(closedge[k].adjvex, G.vexs[k]);   // ����������ı�
    closedge[k].lowcost = 0;    // ��k���㲢��U��
    for (j=0; j<G.vexnum; ++j)
      if (G.arcs[k][j].adj < closedge[j].lowcost) { 
         // �¶��㲢��U������ѡ����С��
         // closedge[j] = { G.vexs[k], G.arcs[k][j].adj };
        closedge[j].adjvex=G.vexs[k];
        closedge[j].lowcost=G.arcs[k][j].adj;
      }
  }
} // MiniSpanTree