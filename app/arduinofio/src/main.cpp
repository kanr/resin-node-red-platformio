/**
 * PicoBuck Breakout Example
 * Mike Hord @ SparkFun Electronics
 * Nov 5 2015
 *
 * A simple example showing how to control a PicoBuck with an Arduino.
 *
 * License: http://opensource.org/licenses/MIT
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

const int CHL_1 = 3;
const int CHL_2 = 5;
const int CHL_3 = 6;

// const int OUTPUT = 255;

void setup()
{
    pinMode(CHL_1, OUTPUT);
    pinMode(CHL_2, OUTPUT);
    pinMode(CHL_3, OUTPUT);
}

void loop()
{
    // Let's just step through a couple of values, so we can see how they look.
    //  Remember, LEDs are non-linear, so doubling the PWM output value won't
    //  necessarily double the apparent brightness.
    analogWrite(CHL_1, 0);
    analogWrite(CHL_2, 0);
    analogWrite(CHL_3, 0);
    delay(1000);

    analogWrite(CHL_1, 64);
    analogWrite(CHL_2, 64);
    analogWrite(CHL_3, 64);
    delay(1000);

    analogWrite(CHL_1, 255);
    analogWrite(CHL_2, 255);
    analogWrite(CHL_3, 255);
    delay(1000);
}
