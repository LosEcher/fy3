inherit ROOM;
 
void create()
{
        set("short", "����·");
        set("long",@LONG
����̫�����ϵ�һ��С·��·����һ����ʯ���ɵ���ͷ��
ǰ����һ����ʯ�š������Ǳ߿���ֻ��ǰ��¥������������
�ô��һƬׯ԰��
LONG );
        set("exits", ([
  "northeast" : __DIR__"hubinlu",
  "west" : __DIR__"shiqiao",
]));
        set("outdoors", "taohua");
 
        setup();
}
