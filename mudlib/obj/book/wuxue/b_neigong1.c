// 

inherit ITEM;

void create()
{
	set_name("���ڹ��ķ��Ͼ�",({"neigongshang","shang"}));
        set_weight(100);
        set("unit", "��");
        set("long",
	"һ�������ź��������������ŵ���ѧ�鼮��\n"
             );
	set("value",1000);
        set("skill", ([
	"name":"force",
        "exp_required":100,
        "max_skill":20,
        "sen_cost":10,
        ]) );
}
 
