# DNA复制与修复
**由GPT-5.6-Sol生成**

***

## 原核细胞DNA复制

### 复制相关概念与方式

* 概念
  * **复制起点**
    > 复制开始的特定位点
  * **复制子**
    > 从复制起点开始，到终点结束的片段
  * **复制叉**
    > 复制中打开的双链，形如叉

* 方式
  * 直线双向复制
  * 多起点双向复制
  * θ双向复制
  * θ单向复制
  * 滚动环复制
  * D环复制

* 特点
  1. 需要dNTP
  2. 需要模板
  3. 需要引物3'-OH存在

* 方向
  * 5'->3'

<br>

### 复制的相关酶

*以大肠杆菌 DNA polymerase为例*

* **DNA Pol I**
  * 结构
    > 约1000氨基酸残基 103kDa 一条多肽链 每个细胞含约400个<br>使用蛋白酶处理后，产生**klenow片段**（68kDa）与**5'->3'外切活性片段**（35kDa）
  * 功能
    * 聚合
      > 主要由**klenow片段**负责，通过核苷酸聚合反应，使DNA链增长<br>在引物（DNA/RNA）羟基末端，dNTP为底物，按模板DNA指令，由DNA Pol I逐个加上核苷酸。<br>
    * 校对
      > 主要由**5'->3'外切活性片段**负责，主要切除在紫外线照射后形成的嘧啶二聚体<br>对象：双链DNA的磷酸二酯键，每次切除10个核苷酸。<br>
    * 焦磷酸解
      > 催化3'端焦磷酸解DNA分子 *（要求高浓度PPi，在生物体内无意义）* <br>
    * 焦磷酸交换
      > 催化dNTP末端PPi同焦磷酸交换 *（要求高浓度PPi，在生物体内无意义）* <br>
* **DNA Pol II**
  * 结构
    > 多亚基 88kDa 每个细胞含约100个<br>
  * 功能
    > 最适模板为双链DNA中gap的单链DNA部位。gap不长于100个核苷酸。<br>
* **DNA Pol III**
  * 结构
    > 17个10种亚基 异二聚体 830kDa 每个细胞含约10-20个<br>
    * 亚基
      * CorePolymerase
        * α亚基
          > 聚合酶活性
        * ε亚基
          > 校对活性（3'->5'外切）
        * θ亚基
          > 组建酶，构成酶的主体
      * Clamp Loader（夹子）
        * δ亚基
        * δ'亚基
        * χ亚基
        * γ亚基
          > DNA-dependent ATPase 驱动酶在DNA上行进 
        * ψ亚基
      * 其他
        * β亚基
        * τ亚基
  * 功能
    * 聚合
      > 原料：模板 | dNTP | 3'-OH引物链 <br>
      > 效率：是DNApolI的30倍，DNApolII的15倍<br>
    * 校正
      > 3'->5'外切活性<br>
* **DNA连接酶**
  * 供能
    > ATP NAD<sup>+</sup>水解供能
  * 作用
    > 连接DNA nick（这两条链必须是同一条互补链配对结合的（T4酶除外）且两条链紧邻）


<br>

### 复制的过程

* **DNA的半不连续复制**
  > 指在 短时间内，首先合成**冈崎片段**（~1000个核苷酸），接着出现较长的片段<br>

  ![DNA的半不连续复制](https://cdn.jsdelivr.net/gh/sakurakouji-luna/pic@main/bio/MolBio/DNA的半不连续复制.png)<br>

  > DNA的两条链是不同的复制方式，一条是连续复制，一条是不连续复制<br>连续复制的链称**前导链**，不连续复制的链称**滞后链**<br>

  > 滞后链的合成：首先，在3'->5'链上形成RNA引物片段（多个）随后，形成多个冈崎片段，再由DNA Pol I切下引物片段，最后，DNA Pol II填补Gap，DNA连接酶接上nick

* **相关蛋白**
  * [DNA拓扑异构酶](https://yuki.su/%E6%A0%B8%E9%85%B8.html#DNA%E7%BB%93%E6%9E%84)
  * DNA解旋酶Helicase
    > 水解ATP供能
  * 单链结合蛋白SSB
    > 可阻止复性，保护单链免受水解酶影响
  * DnaA蛋白
    > 由20~40个亚基组成，每个亚基含有一个ATP结合位点，RNA聚合酶可促进它的活性

#### 复制起始

![DNA复制起始片段](https://cdn.jsdelivr.net/gh/sakurakouji-luna/pic@main/bio/MolBio/DNA复制起始片段.png)<br>

1. DnaA蛋白结合到特点位点，DNA将围绕蛋白卷曲，此时，起始复合体形成
2. hu蛋白每个分子与ATP结合，结合到起始复合体上，此时，DNA链打开，开链复合体形成
3. DnaB在DnaC的帮助下，结合到开链位置并打开双链，开始复制
4. DnaG合成RNA引物
5. SSB与单链结合
6. DNA gyrase（拓扑异构酶II）解除DnaB解旋产生的张力
7. 甲基化酶 甲基化修饰复制起点保守片段5'-GATC-3'中的A

#### 复制延伸

![DNA复制的延伸](https://cdn.jsdelivr.net/gh/sakurakouji-luna/pic@main/bio/MolBio/DNA复制的延伸.png)<br>

* 每合成一个冈崎片段，β亚基脱离，模板重折叠形成下一片段，gap则由DNA Pol I填补，随后，nick由DNA连接酶连接

#### 复制终止

* 相关概念
  * **终止子**
    > 一段特定的DNA序列，复制到这里，复制终止。共6个终止子：TerA~TerF，每个长22bp
  * **终止子利用物质**
    > Tus蛋白

* 终止过程
  > 复制叉1，2到达终止子后停止，此时，还要采用修复复制的办法，将终止子复制完整。此时，两条DNA链相互缠绕，由DNA拓扑异构酶IV解开

#### 复制调节

* 注意
  > 调节作用发生在复制起始阶段，一旦开始复制，便直接到底。
* 调节是DNA甲基化与细菌质膜的相互作用
  > 模板链 及 已经存在的DNA双链 上的 5'-GATC-3'序列中的A是甲基化的，新合成的链上的A，甲基化在13分钟后才开始，这样，0-13分钟，链是半甲基化的。<br>
  > 已知：完全甲基化的DNA，不能与细胞膜结合。半甲基化的DNA，可与膜结合，结合后会掩盖甲基化位点，并且抑制DnaA蛋白与其位点结合，从而抑制复制的开始。<br>
  > 细胞分裂时，质膜拉伸，DNA移向细胞两级，逐渐从质膜脱落 -> 甲基化 -> 下一轮复制

<br>

***

## 真核细胞DNA复制

### 复制的相关酶

* DNA聚合酶
  * α酶
    > 负责染色体DNA复制，大亚基聚合，小亚基合成引物，无3'->5'外切活性（可以参与滞后链RNA引物合成）
  * δ酶
    > 负责DNA链延伸，需要细胞核抗原（PCNA）的辅助，能起到聚合，校正作用（PCNA功能类似β亚基，可增加δ酶复制连续性）
  * β酶
    > 负责核DNA复制
  * ε酶
    > 参与冈崎片段gap修补（类似DNA pol I）
  * γ酶
    > 负责线粒体DNA复制


### 复制特点

1. 多起点复制（自主复制顺序，复制基因）
2. 需要起点识别复合物，其为受控于真核生物细胞周期的蛋白
3. 也有复制叉（移速为原核细胞的1/20）

* 端粒与端粒酶
  * 端粒
    > 线性DNA末端形成的与蛋白质结合的结构，有许多成串的富含GC的重复序列（人：TTAGGG）
  * 端粒酶
    > 含RNA的蛋白质复合物，可逆转录，使得复制以后线性DNA分子末端不变

<br>

***

## DNA的修复

### DNA损伤的原因

1. DNA复制中的错配
2. DNA重组
3. 病毒基因插入
4. 理化因素对DNA结构的破坏

### 六种DNA修复方式

* 错配修复
  * 顾名思义
  > 模板链依赖。<br>在大肠杆菌中，修复由Mut基因产物负责（人体则是MSH/MLH/PMS基因产物）
  1. MutS识别错配，与之结合。
  2. MutL在DNA链上搜索甲基化位点。
  3. MutH与甲基化位点结合，其所带的内切酶从回文结构5'/3'段切开形成nick，其后变为gap，由聚合酶填补。
* 直接修复（高等哺乳动物没有）
  * 处理嘧啶二聚体
  > UV照射后，相邻的嘧啶环相连形成嘧啶二聚体。光复活酶 与 二聚体结合，随后可见光激活 光复活酶。修复，释放。
* 切除修复
  * 处理意外掺入的dUTP/C脱氨形成的U/A脱氨形成的I
  > 一般，dUTP产生后会被快速降解，有时，dUTP会取代dTTP合成DNA。A/C有时也会意外脱氨。<br>此时：
  * 方式1：
    1. N-糖苷酶切下碱基
    2. AP核酸内切酶切下核糖
    > 这两个酶在工作时可能连带切下多个相邻核苷酸，则由DNA Pol I填补
  * 方式2：
    1. UvrA UvrB二聚体结合在异常位置，其后，A脱离，UvrC同B结合
    2. B,C分别从3',5'端切下5-8个核苷酸（共12—15个）
    3. UvrD将切下的解链，其后，由连接酶连接。
    > Uvr基因产物参与修复
* 重组修复
  * 处理复制开始后模板链依旧存在错误的情况
    1. 跳过错误片段形成gap
    2. 将另外一条链切下，填补gap
    3. 另一条链将 其复制出来的链 作为模板，重新复制此链
* 易错修复（应急修复）
  * 许多造成DNA损伤后抑制修复的反应 造成应急修复启动（诱变作用 | 细胞分裂抑制 | 诱导DNA损伤修复）<br>换句话说，SOS反应由LexA阻遏物与RecA蛋白的作用引起
    > 平时，靶基因位点被阻遏<br>LexA基因 被 LexA阻遏<br>RecA基因 被 LexA阻遏<br>当 有大量ATP 且 有单链暴露DNA时：<br>RecA基因开始表达，RecA促进LexA分解<br>LexA开始表达，但产物被RecA分解
  

### 与DNA损伤相关的疾病

* 着色性干皮病
  > 核酸内切酶异常致使切除修复不力，受UV照射后，色素增加，角化，癌变
* 结肠癌
  > MSH2/MSH6/PMS1,MLH1/MLH3/PMS2基因 异常，错配修复不力
* 乳腺癌
  > BRCA1/BRCA2基因异常

### DNA的突变

* 突变现象
  * 碱基对置换
    * 颠换
      > A·T -> C·G
    * 转换
      > A·T -> G·C
  * 移码突变
    * insert
    * missing
* 突变结果
  * 无义突变
  * 错义突变
* 诱变作用
  * 化学诱变剂
    * 碱基类似物
      * 5'-溴尿嘧啶（BU）
        > BU存在两个状态：酮式与A配对，烯醇式与T配对。而BU易发生烯醇式变化，它两种状态的转变导致：A·BU -> A·T | G·BU, G·BU -> G·C | A·BU
      * 2'-氨基嘧啶
        > 和BU差不多，一般与T配对，亚氨状态与C配对
    * 碱基修饰剂
      * HNO<sub>2</sub>
        > $ \ce{ A·T ->[NA] I·C -> G·C } $ <br> $ \ce{ C·G ->[NA] U·A -> T·A } $ <br> $ \ce{ G·C ->[NA] X·C} $ <br> T·A不会发生变化
      * 烷化剂
        > 烷化发生在N1,N3,N7，其中，G的N7高发 使得 7-烷基鸟嘌呤 与 T 配对
        * 甲基磺酸甲酯
        * 甲基磺酸乙酯
    * 嵌入染料
      > 插入DNA两个相邻的碱基之间。造成移码突变
      * 原黄素
      * 溴乙啶
      * 吖啶橙
  * 物理诱变因子
    * UV
      > 使DNA产生环丁烷嘧啶光二聚体 6'C-4'C光生成体
    * 电离辐射

<br>

***
## 考点总结及名词解释

**有待补充**

<!-- BIO-GLOSSARY:START 自动生成,勿手改此区块 -->

## 本章名词

<details>
<summary><b>冈崎片段</b>｜Okazaki fragment　⭐真题</summary>

> 是在 DNA 半不连续复制中产生的长度为 1000~2000 个碱基的短的 DNA 片段，能被连接形成一条完整的 DNA 链。

</details>

<details>
<summary><b>复制叉</b>｜replication fork　⭐真题</summary>

> 复制时, 双链 DNA 要解开成两股链分别进行 DNA 合成, 所以, 复制起点呈叉子形式, 被称为复制叉。

</details>

<details>
<summary><b>半保留复制</b>｜semiconservative replication　⭐真题</summary>

> 半保留复制是DNA复制的一种机制，指在复制过程中亲代DNA双链解开，每条链分别作为模板合成新的互补链，形成的两个子代DNA分子各由一条亲代链和一条新合成的链组成。这一机制由Watson和Crick提出，后由Meselson和Stahl的实验证实。

</details>

<details>
<summary><b>半不连续复制</b>｜semidiscontinuous replication　⭐真题</summary>

> 半不连续复制是指DNA复制过程中，前导链连续合成而后随链不连续合成的模式。由于DNA双链反向平行，解链后一条链的合成方向与复制叉移动方向一致，可连续延伸；另一条链的合成方向相反，需先合成较短的冈崎片段，再由DNA连接酶连接成完整子链。该方式确保了双链的同步复制。

</details>

<details>
<summary><b>超螺旋</b>｜superhelix, supercoil　⭐真题</summary>

> 双螺旋 DNA 进一步扭曲盘绕所形成的特定空间结构, 是 DNA 高级结构的主要形式, 可分为正超螺旋与负超螺旋两大类。按 DNA 双螺旋的相反方向缠绕而成的超螺旋称为负超螺旋, 所有天然的超螺旋 DNA 均为负超螺旋。反之则称为正超螺旋。

</details>

<details>
<summary><b>核心酶</b>｜core enzyme　⭐真题</summary>

> 核心酶是DNA聚合酶Ⅲ全酶中由α、ε和θ三种亚基组成的具有催化活性的核心部分。其中α亚基负责DNA聚合活性，ε亚基具有3′→5′外切核酸酶校正功能，θ亚基则协助核心酶的组装。

</details>

<details>
<summary><b>无义突变</b>｜nonsense mutation　⭐真题</summary>

> 在 DNA 序列中任何导致编码氨基酸的三联密码子转变为终止密码子(UAG、UGA、UAA)的突变, 它使蛋白质合成提前终止, 合成无功能的或无意义的多肽。

</details>

<details>
<summary><b>自主复制序列</b>｜autonomously replicating sequences, ARS</summary>

> 酵母 DNA 复制的起点, 长约 150 bp 左右, 包括数个复制起始必需的保守区。不同 ARS 序列的共同特征是有一个被称为 A 区的 11 bp 的保守序列。

</details>

<details>
<summary><b>吖啶橙</b>｜acridine orange</summary>

> 吖啶橙是一种扁平的稠环分子，属于嵌入染料，可插入DNA双链的碱基对之间。其插入后会将碱基对间距撑大约一倍，占据一个碱基对的位置。在碱基重复位点处，吖啶橙的插入可导致两条链错位，进而在DNA复制时诱发核苷酸的插入或缺失，造成移码突变。

</details>

<details>
<summary><b>复制体</b>｜replisome</summary>

> 复制体是在DNA复制过程中形成的一个多蛋白复合体，负责执行DNA的合成。它包含由Dna B解旋酶和Dna G引物合成酶构成的引发体等基本功能单位。在复制终止阶段，两个复制叉相遇后复制体解体。

</details>

<details>
<summary><b>复制子</b>｜replicon</summary>

> 单独复制的一个DNA单元被称为一个复制子,它是一个可移动的单位。一个复制子在任何一个细胞周期只复制一次。

</details>

<details>
<summary><b>后随链</b>｜lagging strand</summary>

> 后随链是DNA复制中方向与复制叉移动方向相反的新生链，因模板链走向为3'→5'，其合成不能连续进行，必须以冈崎片段的形式分段合成。每个冈崎片段的合成都需要先由引发酶合成一段RNA引物，然后DNA聚合酶Ⅲ在引物上延伸，催化脱氧核糖核苷酸的聚合。后随链合成过程中，DNA聚合酶Ⅲ需不断与模板解离后重新结合，并借助突环结构与前导链的合成相协调。

</details>

<details>
<summary><b>前导链</b>｜leading strand</summary>

> 在 DNA 复制过程中, 与复制叉运动方向相同, 以 5'-3' 方向连续合成的链被称为前导链。

</details>

<details>
<summary><b>切除修复</b>｜excision repair</summary>

> DNA 损伤的一种修复机制, 直接切除受损伤的一条 DNA 片段, 以其互补链为模板新合成 DNA 来取代切除的受损片段。

</details>

<details>
<summary><b>易错修复</b>｜error-prone repair</summary>

> 易错修复是细胞在DNA损伤严重时启动的应急修复机制（属SOS反应）。在有单链DNA和ATP存在时,RecA蛋白被激活成为辅蛋白酶,促进LexA蛋白自身水解,解除其对修复基因的抑制,使修复得以进行。该过程缺乏校正功能,易引入错误,如发生碱基颠换。

</details>

<details>
<summary><b>转换</b>｜transition</summary>

> 嘧啶到嘧啶和嘌呤到嘌呤的替换。

</details>

<details>
<summary><b>Ames试验</b>｜Ames test</summary>

> Ames试验是由B. Ames发明的一种简易检测诱变剂的方法，采用鼠伤寒沙门氏杆菌作为测试生物，用于检测食品、日用品和环境中的诱变剂和致癌剂。

</details>

<details>
<summary><b>吖啶</b>｜acridine</summary>

> 吖啶是一种扁平稠环芳香分子，可作为嵌入染料插入DNA碱基对之间，撑大碱基对距离，导致DNA复制时发生核苷酸插入或缺失，从而引起移码突变。

</details>

<details>
<summary><b>吖啶黄</b>｜acriflavine</summary>

> 吖啶黄是一种吖啶类碱性荧光染料，可用作抗菌剂和核酸染色剂，其平面三环结构可嵌入DNA碱基对之间，干扰模板功能并可能引起移码突变。

</details>

<details>
<summary><b>安装器</b>｜adaptor</summary>

> 安装器（adaptor）指在翻译过程中负责将氨基酸与mRNA密码子对应连接的一类分子，典型代表为tRNA，其通过反密码子识别密码子，并携带相应氨基酸，从而确保遗传信息准确转化为蛋白质序列。

</details>

<details>
<summary><b>暗修复</b>｜dark repair</summary>

> 暗修复是高等动物中一种重要的DNA损伤修复方式，不依赖光，通过切除含有嘧啶二聚体的核酸链，再进行修复合成，使DNA恢复正常的双螺旋结构。该过程属于切除修复机制，可有效清除紫外线等引起的损伤。

</details>

<details>
<summary><b>半不连续性</b>｜semidiscontinuous</summary>

> 半不连续性是指在DNA复制过程中，由于DNA双链反向平行且DNA聚合酶只能沿5'→3'方向合成，导致一条链（前导链）连续合成，另一条链（后随链）不连续合成，先形成若干短的冈崎片段，再由DNA连接酶连接成完整子链的现象。这一过程由冈崎等通过实验证实。

</details>

<details>
<summary><b>倍增片段</b>｜amplified fragment</summary>

> 指在体外DNA扩增技术（如聚合酶链式反应）中，通过引物特异性扩增所得到的特定DNA片段。

</details>

<details>
<summary><b>超螺旋密度</b>｜superhelical density</summary>

> 超螺旋密度是衡量共价闭合环状DNA超螺旋化程度的定量参数，定义为超螺旋数与松弛态下连环数的比值（σ = ΔLk / Lk0），其数值的正负和大小反映DNA双螺旋的扭曲张力及拓扑状态。

</details>

<details>
<summary><b>超螺旋数</b>｜superhelix number</summary>

> 超螺旋数是描述闭环双链DNA拓扑结构的一个参数，代表双螺旋轴自身缠绕的次数，反映超螺旋的数目和方向，正值表示正超螺旋，负值表示负超螺旋。

</details>

<details>
<summary><b>沉默突变</b>｜silent mutation</summary>

> 沉默突变又称同义突变，是指基因中碱基对置换导致核苷酸序列改变，但由于密码子的简并性，所编码的氨基酸序列保持不变的一类突变。它不影响蛋白质的一级结构，但密码子的改变可能影响翻译效率。

</details>

<details>
<summary><b>持续合成能力</b>｜processivity</summary>

> 持续合成能力是指DNA聚合酶在一次与模板结合过程中连续催化多核苷酸链延伸而不从模板脱离的能力。前导链的合成即表现出高持续合成能力，DNA聚合酶Ⅲ可持续添加核苷酸；后随链合成则因冈崎片段而分段进行，聚合酶需反复与模板脱开再结合，持续合成能力较低。

</details>

<details>
<summary><b>避免差错的修复</b>｜error-free repair</summary>

> 避免差错的修复是在DNA损伤修复中，利用未受损的互补链为模板，恢复原有正常序列而不引入额外错误的修复方式。切除修复是典型代表，通过特异酶识别损伤部位，切除含损伤的核酸链，再以完整链为模板进行修复合成并连接，从而精确恢复DNA结构。

</details>

<details>
<summary><b>持续性</b>｜processivity</summary>

> 持续性（processivity）是指DNA聚合酶在一次与模板-引物结合后，连续催化核苷酸聚合而不从模板上解离的能力，通常以一次结合事件中添加的核苷酸数目来衡量。

</details>

<details>
<summary><b>多复制子</b>｜multiple replicons</summary>

> 多复制子是指含有多个复制起点的DNA分子。真核生物染色体DNA为线性双链，含有许多复制起点，因此属于多复制子，每个复制子从各自起点启动复制。与原核生物或病毒的单个复制子不同，多复制子的复制叉移动速度较慢，复制单位长度一般为100~200 kb，且各复制子发动复制的时间有先后，整个染色体完成复制通常需要6~8小时。

</details>

<details>
<summary><b>附加体</b>｜episome</summary>

> 附加体(episome)是一类能独立复制或整合到宿主染色体中随染色体一起复制的遗传因子。典型的附加体如F因子,既可在细胞质中游离存在,也能插入宿主染色体特定位置。这种可逆的整合与游离特性使其在细菌遗传重组中发挥重要作用。

</details>

<details>
<summary><b>复制后修复</b>｜postreplication repair</summary>

> 复制后修复是指在DNA复制完成后，对子代DNA链上仍存在的损伤或缺口进行修复的机制。该修复主要通过遗传重组实现，即从同源DNA的母链上将相应核苷酸序列片段转移至子链缺口处，随后利用合成的序列填补母链空缺。这一过程使复制得以绕过损伤，保证基因组的完整性与稳定性。

</details>

<details>
<summary><b>复制基因</b>｜replicator gene</summary>

> 复制指产生与亲代相同的子代DNA的过程。参与DNA复制过程的基因称为复制基因，它们编码DNA聚合酶、解旋酶、引物酶等复制必需的酶和蛋白质，确保遗传信息准确传递。

</details>

<details>
<summary><b>复制型DNA</b>｜replicative form DNA</summary>

> 复制型DNA（replicative form DNA）是单链DNA病毒在复制过程中首先形成的共价闭环双链DNA分子，作为滚环复制的中间体。其正链由A蛋白在特定位置切开产生游离3'-OH，以环状负链为模板，由DNA聚合酶催化延伸合成新正链。

</details>

<details>
<summary><b>复制许可因子</b>｜replication licensing factor</summary>

> 复制许可因子是在真核细胞DNA复制起始阶段发挥调控作用的蛋白质复合物，它结合在复制起点上，赋予DNA复制一次的许可，从而确保每个细胞周期内基因组仅复制一次，防止重复复制。

</details>

<details>
<summary><b>光复活酶</b>｜photolyase</summary>

> 光复活酶（photolyase）是一种参与DNA损伤修复的酶，能够利用可见光能量直接修复紫外线引起的嘧啶二聚体损伤。它通过结合损伤部位并吸收光子，将二聚体解聚为正常碱基，从而恢复DNA的正常双螺旋结构。在高等动物中，光复活修复并非主要机制，更多地依赖暗修复切除损伤链再合成。

</details>

<details>
<summary><b>光复活修复</b>｜photoreactivation repair</summary>

> 光复活修复是利用光能直接修复紫外线引起的DNA损伤（主要是嘧啶二聚体）的机制，通过光激活的酶使二聚体解聚，恢复DNA正常结构，相较于切除修复等暗修复过程，它是一种更直接、不需要切除合成的修复方式。

</details>

<details>
<summary><b>滚环</b>｜rolling circle</summary>

> 滚环是一种单向复制的特殊方式。

</details>

<details>
<summary><b>核苷酸切除修复</b>｜nucleotide excision repair</summary>

> 核苷酸切除修复是一种重要的DNA损伤修复机制，通过特异性酶识别并切除含有损伤结构的DNA片段，然后以完整互补链为模板进行修复合成，恢复DNA正常双螺旋结构。在原核生物中，UvrABC系统参与此过程，UvrB和UvrC分别在损伤部位3'端和5'端切开磷酸二酯键，切除含损伤的寡核苷酸。真核生物则切除约27-29个核苷酸片段，随后由DNA聚合酶ε和DNA连接酶填补缺口。该修复方式可处理多种DNA损伤，如紫外线引起的嘧啶二聚体等，是维持基因组稳定性的重要途径。

</details>

<details>
<summary><b>互变异构</b>｜tautomerism</summary>

> 互变异构是指分子中氢原子发生迁移并伴随双键位置改变，从而使分子在两种不同结构形式之间相互转换的现象。例如，5-溴尿嘧啶可在酮式和烯醇式之间发生互变异构，导致其与不同碱基配对，进而在DNA复制时引起碱基对置换。

</details>

<details>
<summary><b>回复突变</b>｜reverse mutation</summary>

> 回复突变是指突变基因经过第二次突变后完全或部分恢复为原来表型的现象，其发生概率非常低。

</details>

<details>
<summary><b>解链蛋白</b>｜unwinding protein</summary>

> 解链蛋白是一类参与DNA复制过程的蛋白质，能结合并稳定解旋酶解开双链后产生的单链DNA，防止其重新配对或降解，确保复制顺利进行。

</details>

<details>
<summary><b>解链区</b>｜unwinding region</summary>

> 解链区是指在DNA复制或转录过程中，DNA双链局部解开形成的单链区域，为复制或转录提供模板。

</details>

<details>
<summary><b>解旋酶</b>｜helicase</summary>

> 解旋酶是一类能结合于DNA单链末端或缺口并向双链方向移动，从而解开双链的酶。在原核生物中，Dna B解旋酶与引物合成酶共同构成引发体，参与复制叉的起始和延伸。

</details>

<details>
<summary><b>开链复合物</b>｜open complex</summary>

> 开链复合物(open complex)是细菌DNA复制起始阶段，在起始复合物基础上，经HU蛋白作用使复制起点oriC中富含AT的13 bp重复序列局部解链而形成的开放结构。该过程需要ATP供能，旨在暴露单链模板，为DnaB解旋酶结合及后续引发前体复合物的形成创造条件。

</details>

<details>
<summary><b>跨越损伤</b>｜translesion</summary>

> 跨越损伤是指DNA复制中当DNA聚合酶遇到非编码损伤时，利用特殊的跨损伤DNA聚合酶绕过损伤位点继续合成，以维持基因组完整性的耐受机制。这类酶活性不依赖模板碱基配对，可在损伤对面插入核苷酸，但通常缺乏3'→5'校对活性，合成容易出错，属于易错修复途径，可能导致突变。

</details>

<details>
<summary><b>连接片段</b>｜linker fragment</summary>

> 连接片段(linker fragment)是重组DNA技术中人工合成的短双链DNA片段，通常含有一种或多种限制性内切酶识别位点。它被连接于目的DNA片段末端，经相应限制酶切割后可产生黏性末端，从而便于与载体DNA进行连接，实现DNA重组。

</details>

<details>
<summary><b>连锁体</b>｜linkage group</summary>

> 连锁体是指在环状双链DNA复制终止时，两个子代环状DNA分子互相缠绕形成的连环体结构。它产生于复制叉在终止区相遇后，亲代链解开并填补剩余空隙，导致闭环DNA彼此套连。在细胞分裂前，连锁体必须由拓扑异构酶IV等酶解开，以确保两个子代DNA分子正确分离。

</details>

<details>
<summary><b>螺旋数</b>｜helical turns</summary>

> 螺旋数是指DNA双螺旋结构中两条链相互缠绕的圈数，通常以碱基对总数除以每圈螺旋的碱基对数（如B-DNA约为10.5 bp/圈）计算，是描述DNA拓扑性质的重要参数，与连环数和超螺旋数共同决定DNA分子的整体拓扑状态。

</details>

<details>
<summary><b>起点</b>｜origin of replication</summary>

> 复制起点是DNA分子上启动DNA复制的特定序列区域。在原核生物如大肠杆菌中，复制起点称为ori C，由约245 bp的高度保守序列组成，包含三个13 bp的富含AT重复序列和四个9 bp的DnaA蛋白结合重复序列，通过DnaA蛋白结合、HU蛋白协助解链等步骤形成起始复合物，进而招募解旋酶解开双链，启动双向复制。真核生物染色体含有多个复制起点，每个复制子从各自起点进行复制。

</details>

<details>
<summary><b>牵引蛋白</b>｜traction protein</summary>

> 牵引蛋白是一类能够产生牵引力、驱动其他分子或结构运动的蛋白质，常见于细胞内运输或DNA拓扑异构过程，通过构象变化实现牵引功能。

</details>

<details>
<summary><b>前导片段</b>｜leader peptide</summary>

> 前导肽是由操纵子前导区编码的一段小肽，参与转录的衰减调控。其编码序列位于前导RNA中，该RNA可形成茎环终止结构并后接一串U，翻译出的前导肽影响RNA构象，从而决定转录是否终止。

</details>

<details>
<summary><b>前引发体</b>｜preprimosome</summary>

> 前引发体是在DNA复制过程中，由Pri A蛋白识别引发体装配位点，并与Pri B、Pri C共同结合后，在Dna T协助下引入Dna B解旋酶和Dna C蛋白组装形成的多蛋白复合体。该复合体是引发体的前体，进一步招募Dna G引物合成酶后即构成完整的引发体，负责后随链上冈崎片段的引发。

</details>

<details>
<summary><b>嵌入染料</b>｜intercalating dye</summary>

> 嵌入染料是一类扁平的稠环芳香族分子，如吖啶橙、原黄素和溴化乙锭，能插入双链DNA相邻碱基对之间。插入后碱基对间距离增大近一倍，占据一个碱基对的位置，若发生在碱基重复区可导致两条链错位。DNA复制时，此类插入易引发核苷酸的插入或缺失，从而造成移码突变，因此嵌入染料常作为诱变剂。

</details>

<details>
<summary><b>切除酶</b>｜excisionase</summary>

> 切除酶(excisionase)是一类在DNA位点特异性重组过程中催化切除反应的酶，例如λ噬菌体的Xis蛋白，它能够识别特定序列并促使原噬菌体从宿主染色体上精确切离。

</details>

<details>
<summary><b>切口</b>｜nick</summary>

> 切口指双链DNA分子中一条链上的磷酸二酯键断裂形成的缺口，暴露出5'-磷酸基和3'-羟基。它是DNA复制、修复及拓扑异构体调节过程中的常见中间结构，可由特定核酸酶切割产生，也可在DNA连接酶作用下重新封闭。

</details>

<details>
<summary><b>切口封闭酶</b>｜DNA ligase</summary>

> DNA连接酶是催化双链DNA切口处5'-磷酸基与3'-羟基形成磷酸二酯键的酶。它只能连接由互补链聚在一起构成双螺旋的切口链，不能连接两条游离的DNA链。连接反应需能量，大肠杆菌连接酶以NAD⁺为能源，动物细胞和噬菌体连接酶则以ATP为能源，通过形成酶-AMP中间体及将AMP转移至切口5'端活化，再由3'-OH亲核攻击形成磷酸二酯键。在DNA复制中，该酶负责将不连续合成的片段连接成大分子DNA。

</details>

<details>
<summary><b>缺失</b>｜deletion</summary>

> 缺失（deletion）是指DNA分子中一个或多个核苷酸对的丢失，属于常见突变类型。当缺失的核苷酸数目为非三的整倍数时，可引发移码突变，导致下游密码子阅读框架改变，常使基因产物完全失活；缺失片段大小不一，可小至单个核苷酸，也可达十几至几千碱基对，形成大片段缺失。

</details>

<details>
<summary><b>RNA连接酶</b>｜RNA ligase</summary>

> RNA连接酶是一种参与RNA编辑的酶，能在经过内切酶切开、末端尿苷酸转移或外切等加工后，催化RNA链断口的重新连接。

</details>

<details>
<summary><b>SOS反应</b>｜SOS response</summary>

> SOS反应是原核生物中一种应急的易错修复反应，由Rec A蛋白和Lex A阻遏物相互作用引发。当DNA损伤产生单链DNA时，Rec A蛋白在单链DNA和ATP存在下被激活，促进Lex A阻遏物自我水解，解除其对一系列基因的抑制。这些基因包括切除修复基因uvrA、uvrB、uvrC，编码跨损伤合成DNA聚合酶的umuDC和dinB等，从而启动修复与诱变过程。该反应能在损伤严重时提高修复效率，但易引入突变，是细胞的一种应急生存机制。

</details>

<details>
<summary><b>松弛突变</b>｜relaxed mutation</summary>

> 松弛突变（relaxed mutation）是指使细菌在氨基酸饥饿时丧失严紧控制（stringent control）、仍能继续合成RNA和蛋白质的突变，通常由relA等严紧反应相关基因缺陷引起，导致原本应激性的代谢抑制被解除。

</details>

<details>
<summary><b>Tus-ter复合物</b>｜Tus-Ter complex</summary>

> Tus-ter复合物是大肠杆菌DNA复制终止阶段，由终止蛋白Tus与染色体终止区约22 bp的终止子（ter）位点结合所形成的复合物。该复合物具有方向特异性，只阻挡对侧复制叉前进，防止其越过中点过量复制，从而确保两个复制叉在终止区协调会合，使环状染色体两半边各自复制，并避免复制与转录方向对撞。

</details>

<details>
<summary><b>替代环</b>｜displacement loop</summary>

> 替代环（displacement loop）是双链DNA分子中，局部区域的一条链被另一条单链或新合成的链所取代而形成的单链环状结构，常见于DNA复制起始、重组或端粒维持等过程。

</details>

<details>
<summary><b>拓扑结构</b>｜topology</summary>

> DNA的拓扑结构是指共价闭合环状DNA分子的空间缠绕状态，主要由连环数和超螺旋数等参数描述，这些参数可通过拓扑异构酶的作用而改变，从而影响DNA的复制、转录等生物学功能。

</details>

<details>
<summary><b>拓扑连环数</b>｜linking number</summary>

> 连环数是指共价闭合环状DNA中两条链相互缠绕的总次数，是描述DNA拓扑性质的基本参数。拓扑异构酶通过催化DNA链的瞬时断裂与再连接，可改变DNA的连环数和超螺旋数，从而调节DNA的拓扑状态。

</details>

<details>
<summary><b>拓扑异构酶</b>｜topoisomerase</summary>

> 拓扑异构酶是一类催化DNA拓扑结构改变的酶，通过断裂和重新连接DNA链来调节DNA的超螺旋状态和连环数。I型拓扑异构酶（如大肠杆菌拓扑异构酶Ⅰ）切断DNA单链，使另一条链通过切口后重新连接，过程中无需外界供能，只能消除负超螺旋；II型拓扑异构酶（如细菌DNA旋转酶）则同时切断DNA双链，利用ATP供能，可连续引入负超螺旋或松弛负超螺旋。

</details>

<details>
<summary><b>拓扑异构体</b>｜topoisomer</summary>

> 拓扑异构体是指具有相同核苷酸序列但连环数或超螺旋数等拓扑状态不同的DNA分子，通常由拓扑异构酶催化的链断裂、穿越和再连接反应产生，互变过程中不改变其一级结构，仅改变DNA的连环数或超螺旋密度。

</details>

<details>
<summary><b>外切酶核酸</b>｜exonuclease</summary>

> 外切核酸酶是一类从多核苷酸链的5′端或3′端逐个水解下单核苷酸的酶。它作用于核酸链末端的磷酸二酯键，与内切核酸酶相对。有些外切核酸酶对DNA或RNA具有特异性，而有些则能作用于两种核酸链。

</details>

<details>
<summary><b>烷化剂</b>｜alkylating agent</summary>

> 烷化剂是一类带有一个或多个活性烷基的化学物质，能使DNA碱基烷基化，主要作用位点是鸟嘌呤的N7位。烷基化可导致碱基脱落、DNA链断裂或双链交联，从而抑制DNA的模板功能。烷化剂是极强的化学诱变剂和致癌剂，部分在临床上被用作抗肿瘤药物。

</details>

<details>
<summary><b>无嘧啶位点</b>｜apyrimidinic site</summary>

> 无嘧啶位点（apyrimidinic site）是指DNA分子中嘧啶碱基被切除后留下的脱氧核糖残基部位，与无嘌呤位点统称为AP位点。它是碱基切除修复过程中的一个中间产物，由特异的DNA糖基化酶识别并水解异常嘧啶碱基与脱氧核糖之间的糖苷键产生，后续需通过核酸内切酶等进一步加工以完成修复。

</details>

<details>
<summary><b>亚硝基胍</b>｜nitrosoguanidine</summary>

> 亚硝基胍（nitrosoguanidine, NTG）是一种强化学诱变剂，属于烷化剂和碱基的修饰剂。它通过对DNA碱基进行烷化修饰，改变碱基的配对性质，从而引起基因突变。

</details>

<details>
<summary><b>引发复合物</b>｜primosome</summary>

> 引发体(primosome)是DNA复制过程中由DnaB解旋酶和DnaG引物合成酶等组成的多蛋白复合体，为复制体的基本功能单位。其装配由PriA识别引发体装配位点，与PriB、PriC结合后，通过DnaT引入DnaB和DnaC形成前引发体，再加入DnaG构成完整引发体。该复合体在后随链上催化合成冈崎片段的RNA引物，为DNA聚合酶Ⅲ提供延伸所需的3'-OH端。

</details>

<details>
<summary><b>引发酶</b>｜primase</summary>

> 是依赖于 DNA 的 RNA 聚合酶, 其功能是在 DNA 复制过程中合成 RNA 引物。

</details>

<details>
<summary><b>引发体</b>｜primosome</summary>

> DNA 复制过程中引发合成每个冈崎片段时所需的多蛋白复合物, 包括预引发蛋白、具有 ATP 酶活性的蛋白质以及引物酶。引发体与 DNA 结合后由引物酶合成 RNA 引物并合成与 RNA 引物相连接的冈崎片段。引发体沿不连续合成的 DNA 链移动, 其移动的方向与 RNA 及 DNA 的合成方向相反。引发体移动需要来自 ATP 水解的能量。

</details>

<details>
<summary><b>营养缺陷型突变体</b>｜auxotrophic mutant</summary>

> 营养缺陷型突变体(auxotrophic mutant)是指因基因突变而丧失合成某种必需生长因子(如氨基酸、维生素等)能力的突变菌株或细胞,只有在培养基中额外添加相应营养物质才能生长。

</details>

<details>
<summary><b>诱变剂</b>｜mutagen</summary>

> 诱变剂是能提高基因突变频率的化学或物理因素，可直接引起DNA碱基序列或结构的改变。常见类型包括碱基类似物（如5-溴尿嘧啶、2-氨基嘌呤），它们通过互变异构导致碱基对置换；以及嵌入染料（如吖啶橙、溴化乙锭），插入碱基对之间造成移码突变。诱变剂诱导的突变可能使原癌基因激活或抑癌基因失活，与细胞癌变相关，可通过Ames试验等方法进行检测。

</details>

<details>
<summary><b>再起始</b>｜reinitiation</summary>

> 再起始（reinitiation）是指在蛋白质合成过程中，核糖体完成一条多肽链的翻译后，小亚基未与mRNA解离，而直接在下游起始密码子处重新起始翻译另一开放阅读框的现象，常见于某些病毒或多顺反子mRNA的翻译调控中。

</details>

<details>
<summary><b>直接修复</b>｜direct repair</summary>

> 直接修复是DNA损伤修复的一种方式，通过特定的酶直接逆转损伤，无需切除或替换核苷酸片段，例如烷基转移酶修复烷基化碱基或光复活酶修复嘧啶二聚体。

</details>

<details>
<summary><b>置换型</b>｜replacement</summary>

> 置换型是指在重组DNA技术中，利用酶切位点，用人工合成的具有特定变异序列的DNA片段，取代野生型基因中相应酶切位点间的序列，从而产生的突变类型。这种置换称为盒式诱变，如同置换盒式录音带，可在指定位置引入精确的序列改变，用于基因定位诱变。

</details>

<details>
<summary><b>终点</b>｜endpoint</summary>

> 终点是指生物合成或代谢途径中反应终止的位置或产物。在脂肪酸合成中，动物体内脂肪酸合酶作用的终点为软脂酸；在转录过程中，RNA链的合成结束于DNA模板的下游终点。

</details>

<details>
<summary><b>终止区</b>｜terminator region</summary>

> 终止区是细菌环状染色体上两个复制叉相遇并停止复制的特定区域，含有多个约22 bp的终止子位点，这些位点与Tus蛋白结合形成Tus-ter复合物，能够阻挡复制叉的前移，确保复制在正确位置终止。

</details>

<details>
<summary><b>转录偶联的修复</b>｜transcription-coupled repair</summary>

> 转录偶联的修复是核苷酸切除修复的一种亚途径，专门作用于活跃转录基因的模板链。当RNA聚合酶遇到DNA损伤而停滞时，会招募特异的修复因子，优先切除并修复该损伤，以恢复转录模板的正常功能。

</details>

<details>
<summary><b>着色性干皮病</b>｜xeroderma pigmentosum</summary>

> 着色性干皮病是一种常染色体隐性遗传病，因核苷酸切除修复系统缺陷所致。患者细胞对紫外线等引起的DNA损伤修复能力低下，导致皮肤对日光高度敏感，易发生色素沉着、萎缩和角化，并高发皮肤癌。

</details>

<details>
<summary><b>自发突变</b>｜spontaneous mutation</summary>

> 自发突变是指在自然条件下发生的基因突变。其类型包括碱基对的置换（转换和颠换）、移码突变以及大片段的缺失和重复等，这些变化可能导致沉默突变、错义突变或无义突变等效应。

</details>

<details>
<summary><b>自我复制</b>｜self-replication</summary>

> 自我复制是指生物分子或系统利用自身作为模板，合成出与自身相同或互补结构的过程，是遗传信息从亲代传递到子代的基础。在分子水平上，DNA通过半保留复制机制实现精确拷贝，而某些RNA病毒则依赖RNA复制酶以RNA为模板合成子代RNA。“RNA世界”假说认为，早期生命中的RNA既能携带遗传信息又能催化自身复制，体现了核酸自我复制在生命起源中的关键作用。

</details>

<!-- BIO-GLOSSARY:END -->
